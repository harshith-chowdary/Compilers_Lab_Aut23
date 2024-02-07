/*
    Maddi Nihith - 21CS10040
    Meduri Harshith Chowdary - 21CS10042
*/

#define HELLO 1234

const long INF = __INT64_MAX__;

inline int check(int *restrict p, ...) {
    auto int a = 1;
    register int b;
    extern int c;
    volatile int d;
    return a;
}

enum myenum {
    TAG1, TAG2
};

struct mystruct_ {
    _Bool b;
    _Complex c;
    _Imaginary i;
    int n;
};

union myunion {
    int x, y;
};

typedef struct mystruct_ mystruct;
static mystruct ms2;

double * blah_blah_blah(void * something){
    double * anything = something;
    return anything;
}

void main() {
    int n1 = 4 * sizeof(int);
    for(int i = n1; i <= n1 && i >= 0; i++) {
        n1 /= 2;
        n1 *= 2;
        n1 += 1, n1 -= 1;
        n1 = n1 ^ n1 ^ n1; 
        n1 |= n1;
        n1 &= n1;
        if(n1 % 2 == 0)
            printf("n = %d\n", n1);
        else {
            n1 = n1 + n1 + (-n1) / 1;
            n1 <<= 2;
            n1 >>= 2;
        }
    }

    // Let's do some math stuff

    double d1 = 345.;
    double d2 = 345.e2;
    double d3 = .00;

    const float f1 = 0.345;
    float f2 = .345E-3;
    float f3 = 0.345e+4;
    float f4 = 12.345e11;

    unsigned long l = 9652337371;
    signed short s = -13;

    char c = '\?';
    char s1[] = "A string // comments dont work here, /* not even multiline ones */";
    char s2[] = "" /* Empty string check */;

    int n2 = n1 & s ? 1 : 2;
    n2--;

    /*
        Oww, not done yet !!
        There's more coming ....
        Hehe !!!
    */

    mystruct *ms1;
    switch (ms1->b) {
        case 1:
            ms2.n %= n2;
            ms2.n ^= ms2.n;
            break;
        default:
            break;
    }

    do {
        s << 2;
        s >> 2;
        s = ~s;
        s = s | s;
        if(s < 10 && s > 0)
            goto label;
        label:
            continue;
    } while(n2 != -1 || !n1);

    return;
}