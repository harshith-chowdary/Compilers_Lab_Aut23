#include "myl.h"

#define INT_MAX __INT32_MAX__
#define INT_MIN (-INT_MAX - 1)
#define newline "\n"
#define quote "\""

int main(){

    printStr("****** To Test printStr ******\n\n");
    char *strings[4] = {"This is to test the \"printStr\" Function.", "This is a sample string to be printed.", "Next follows an empty string.", ""};
    for(int i=0; i<4; i++){
        printStr(quote);
        int number_of_characters = printStr(strings[i]); 
        printStr("\" :--:> # of characters printed = ");
        printInt(number_of_characters);
        printStr(newline);
    }
    printStr(newline);

    printStr("\n****** To Test printInt ******\n\n");
    int ints[13] = {0, 1, -1, 12, -12, 123, -123, 1234, -1234, 12345, -12345, INT_MAX, INT_MIN};
    for(int i=0; i<13; i++){
        int number_of_characters = printInt(ints[i]);
        printStr(" :--:> # of characters printed = ");
        printInt(number_of_characters);
        printStr(newline);
    }
    printStr(newline);

    printStr("\n****** To Test readInt ******\n\n");
    int tempn;
    int rep = 1;
    while(rep != 0) {
        printStr("Enter an integer number : ");
        int number_of_characters = readInt(&tempn);
        if(number_of_characters == ERROR) 
            printStr("Invalid input !!");
        else{
            printStr("# of characters read = ");
            printInt(number_of_characters);
            printStr(newline);
            printStr("Successfuly read integer : ");
            printInt(tempn);
        }
        printStr("\n\nTo continue reading enter 1 else 0: ");
        readInt(&rep);
    }
    printStr(newline);

    printStr("\n****** To Test printFlt ******\n\n");
    float floats[13] = {99.9898, 0.000021, 99.9999, 0.F, -12.34F, 12.345F, -2.F, 2.F, 0.1234F, -0.1234F, 123.456F, 0.001F, -0.0106F};
    for(int i=0; i<13; i++){
        int number_of_characters = printFlt(floats[i]);
        printStr(" :--:> # of characters printed = ");
        printInt(number_of_characters);
        printStr(newline);
    }
    printStr(newline);

    printStr("\n****** To Test readFlt ******\n\n");
    float tempf;
    rep = 1;
    while(rep != 0) {
        printStr("Enter a floating point number : ");
        int number_of_characters = readFlt(&tempf);
        if(number_of_characters == ERROR) printStr("Invalid input !!");
        else{
            printStr("# of characters read = ");
            printInt(number_of_characters);
            printStr(newline);
            printStr("Successfuly read float : ");
            printFlt(tempf);
        }
        printStr("\n\nTo continue reading enter 1 else 0: ");
        readInt(&rep);
    }
    printStr(newline);

    printStr("****** Testing Done ******\n");

    return 0;
}