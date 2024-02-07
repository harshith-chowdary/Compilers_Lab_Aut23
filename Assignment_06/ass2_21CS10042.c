#include "myl.h"

#define FLOATINGPRECISION 6
#define BUFFER 40
#define INT_MAX __INT32_MAX__
#define INT_MIN (-INT_MAX - 1)

int printStr(char *str) {
    int length = 0;
    while (str[length] != '\0') length++;

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(str), "d"(length));

    return length;
}

int readInt(int *eP) {
    char input[BUFFER];
    int length;

    __asm__ __volatile__ (
        "movl $0, %%eax \n\t" 
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(length)
        :"S"(input), "d"(BUFFER));

    if(length < 0) {
        *eP = ERROR;
        return ERROR;
    }
    
    int sign = 1, index = 0;
    long ret = 0;
    if(index < length) {
        if(input[index] == '-') {
            sign = -1;
            index++;
        } else if(input[index] == '+') {
            index++;
        }
    }
    
    while(index < length && input[index] != '\n') {
        if(input[index] < '0' || input[index] > '9') {
            *eP = ERROR;
            return ERROR;
        }
        int curr = (int)(input[index] - '0');
        ret *= 10;
        ret += (sign * curr);
        if(ret < INT_MIN || ret > INT_MAX) {
            *eP = ERROR;
            return ERROR;
        }
        index++;
    }

    *eP = OK;
    return (int)ret;
}

int printInt(int n) {
    char output[BUFFER];
    int length = 0;
    long nl = n;
    if (nl < 0) {
        output[length++] = '-';
        nl = -nl;
    }
    while (nl) {
        output[length++] = (char)('0' + (nl % 10));
        nl /= 10;
    }
    if (length == 0)
        output[length++] = '0';

    int left = (output[0] == '-' ? 1 : 0);
    int right = length - 1;
    while (left < right) {
        char temp = output[left];
        output[left++] = output[right];
        output[right--] = temp;
    }

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(output), "d"(length));
    return length;
}

int readFlt(float *eP){
    char input[BUFFER];
    int length;

    __asm__ __volatile__ (
        "movl $0, %%eax \n\t" 
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(length)
        :"S"(input), "d"(BUFFER));

    if(length < 0) {
        *eP = ERROR;
        return ERROR;
    }
    
    int sign = 1, index = 0, multi = 0, multsign = 1;
    float ret = 0;
    if(index < length) {
        if(input[index] == '-') {
            sign = -1;
            index++;
        } else if(input[index] == '+') {
            index++;
        }
    }
    
    while(index < length && input[index] != '\n' && input[index] != '.' && input[index] != 'e' && input[index] != 'E') {
        if(input[index] < '0' || input[index] > '9') {
            *eP = ERROR;
            return ERROR;
        }
        int curr = (int)(input[index] - '0');
        ret *= 10;
        ret += curr;
        index++;
    }

    if(index < length && input[index] == '.') {
        index++;
        float shift = 10.F;
        while(index < length && input[index] != '\n' && input[index] != 'E' && input[index] != 'e') {
            if(input[index] < '0' || input[index] > '9') {
                *eP = ERROR;
                return ERROR;
            }
            float curr = (float)(input[index] - '0');
            curr /= shift;
            ret += curr;
            shift *= 10;
            index++;
        }
    }

    if(index < length && (input[index] == 'e' || input[index] == 'E')) {
        index++;
        if(index < length) {
            if(input[index] == '-') {
                multsign = -1;
                index++;
            } else if(input[index] == '+') {
                index++;
            }
        }
        while(index < length && input[index] != '\n') {
            if(input[index] < '0' || input[index] > '9') {
                *eP = ERROR;
                return ERROR;
            }
            int curr = (int)(input[index] - '0');
            multi *= 10;
            multi += curr;
            index++;
        }
    }

    for(int i = 0; i < multi; i++) {
        if(multsign == 1) {
            ret *= 10;
        } else {
            ret /= 10;
        }
    }

    *eP = OK;
    return sign * ret;
}

int printFlt(float f) {
    char output[BUFFER];
    int length = 0;
    if (f < 0) {
        output[length++] = '-';
        f = -f;
    }

    int integral_part = (int)f;
    f -= integral_part;

    while (integral_part) {
        output[length++] = (char)('0' + (integral_part % 10));
        integral_part /= 10;
    }
    if (length == 0 || output[length - 1] == '-')
        output[length++] = '0';

    int left = (output[0] == '-' ? 1 : 0);
    int right = length - 1;
    while (left < right) {
        char temp = output[left];
        output[left++] = output[right];
        output[right--] = temp;
    }

    output[length++] = '.';

    for (int i = 0; i < FLOATINGPRECISION; i++) f *= 10;

    int fractional_part = (int)f;
    left = length;

    for (int i = 0; i < FLOATINGPRECISION; i++) {
        output[length++] = (char)('0' + (fractional_part % 10));
        fractional_part /= 10;
    }

    right = length - 1;
    while (left < right) {
        char temp = output[left];
        output[left++] = output[right];
        output[right--] = temp;
    }

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(output), "d"(length));
    
    return length;
}