int printStr(char *s);
int readInt(int *eP);
int printInt(int n);
int printFlt(float f);
int readFlt(float * eP);

void testIncDec(int n) {
    printStr("Value passed to function = ");
    printInt(n);
}

int main() {
    printStr("\n#### TEST 1 (Arithmetic operators) ####");

    int n1, n2, n3, n4;
    n1 = 30;
    n2 = 16;
    n3 = 7;
    n4 = -22;

    printStr("\nn1 = ");
    printInt(n1);
    printStr("\nn2 = ");
    printInt(n2);
    printStr("\nn3 = ");
    printInt(n3);
    printStr("\nn4 = ");
    printInt(n4);

    float f1, f2, f3, f4 = 99.99;
    f1 = 22.44;
    f2 = -0.9;
    f3 = 6.643;

    printStr("\nf1 = ");
    printFlt(f1);
    printStr("\nf2 = ");
    printFlt(f2);
    printStr("\nf3 = ");
    printFlt(f3);
    printStr("\nf4 = ");
    printFlt(f4);

    int n5 = n1 + n2;
    int n6 = n1 - n2;
    int n7 = n1 * n2;
    int n8 = n1 / n2;
    int n9 = n1 % n2;

    printStr("\nn1 + n2 = ");
    printInt(n5);
    printStr("\nn1 - n2 = ");
    printInt(n6);
    printStr("\nn1 * n2 = ");
    printInt(n7);
    printStr("\nn1 / n2 = ");
    printInt(n8);
    printStr("\nn1 % n2 = ");
    printInt(n9);

    float f5 = f1 + f2;
    float f6 = f1 - f3;
    float f7 = f1 * f2;
    float f8 = f1 / f3;

    printStr("\nf1 + f2 = ");
    printFlt(f5);
    printStr("\nf1 - f3 = ");
    printFlt(f6);
    printStr("\nf1 * f2 = ");
    printFlt(f7);
    printStr("\nf1 / f3 = ");
    printFlt(f8);

    int n10 = -n1 + f2 - n3 + f4 + 10;
    int n11 = f1 * n2 / f3 + n4 - 10;

    float f9 = n1 + f2 * n3 / n4 - 0;
    float f10 = (n1 + n2) * (-f3 / n4) - 15;

    printStr("\n-n1 + f2 - n3 + f4 + 10 = ");
    printInt(n10);
    printStr("\nf1 * n2 / f3 + n4 - 10 = ");
    printInt(n11);

    printStr("\nn1 + f2 * n3 / n4 - 0 = ");
    printFlt(f9);
    printStr("\n(n1 + n2) * (-f3 / n4) - 15 = ");
    printFlt(f10);

    printStr("\n-n3 = ");
    printInt(-n3);
    printStr("\n-f2 = ");
    printFlt(-f2);

    printStr("\nTest pre increment: ");
    testIncDec(++n1);
    printStr(", Value after call = ");
    printInt(n1);

    printStr("\nTest post increment: ");
    testIncDec(n1++);
    printStr(", Value after call = ");
    printInt(n1);

    printStr("\nTest pre decrement: ");
    testIncDec(--n1);
    printStr(", Value after call = ");
    printInt(n1);

    printStr("\nTest post decrement: ");
    testIncDec(n1--);
    printStr(", Value after call = ");
    printInt(n1);
    
    printStr("\n\n");
    return 0;
}
