int printStr(char *s);
int readInt(int *eP);
int printInt(int n);
int printFlt(float f);
int readFlt(float * eP);

int main() {
    printStr("\n#### TEST 7 (Conditional operators) ####\n");
    
    int n1, n2;
    // float n1, n2;
    // char n1, n2;

    n1 = 5, n2 = 5;
    // n1 = 5.5, n2 = 2.2;
    // n1 = 'a', n2 = 'b';
    printStr("\nTesting == operator: ");
    if (n1 == n2) {
        printStr("Passed");
    }
    else {
        printStr("Failed");
    }

    n2 = 6;
    // n2 = 6.6;
    // n2 = 'x';
    printStr("\nTesting != operator: ");
    if (n1 != n2) {
        printStr("Passed");
    }
    else {
        printStr("Failed");
    }

    n1 = -1, n2 = 3;
    // n1 = 2.2, n2 = 7.5;
    // n1 = 'x', n2 = 'z';
    printStr("\nTesting < operator (strictly less): ");
    if (n1 < n2) {
        printStr("Passed");
    }
    else {
        printStr("Failed");
    }

    n2 = -1;
    // n2 = '0.4';
    // n2 = 'v';
    printStr("\nTesting < operator (equality): ");
    if (n1 < n2) {
        printStr("Failed");
    }
    else {
        printStr("Passed");
    }
    printStr("\nTesting <= operator (equality): ");
    if (n1 <= n2) {
        printStr("Passed");
    }
    else {
        printStr("Failed");
    }

    n1 = -2;
    // n1 = -3.6;
    // n1 = 'd';
    printStr("\nTesting <= operator (strictly less): ");
    if (n1 <= n2) {
        printStr("Passed");
    }
    else {
        printStr("Failed");
    }

    n1 = 7;
    // n1 = 4.56;
    // n1 = 'f';
    printStr("\nTesting > operator (strictly greater): ");
    if (n1 > n2) {
        printStr("Passed");
    }
    else {
        printStr("Failed");
    }
    
    n2 = 7;
    // n2 = -5.78;
    // n2 = 'u';
    printStr("\nTesting > operator (equality): ");
    if (n1 > n2) {
        printStr("Failed");
    }
    else {
        printStr("Passed");
    }
    printStr("\nTesting >= operator (equality): ");
    if (n1 >= n2) {
        printStr("Passed");
    }
    else {
        printStr("Failed");
    }

    n1 = 8;
    // n1 = -5.0;
    // n1 = 'b';
    printStr("\nTesting >= operator (strictly greater): ");
    if (n1 >= n2) {
        printStr("Passed");
    }
    else {
        printStr("Failed");
    }

    printStr("\n\n");
    return 0;
}
