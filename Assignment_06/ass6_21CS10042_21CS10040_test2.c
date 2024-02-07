int printStr(char *s);
int readInt(int *eP);
int printInt(int n);
int printFlt(float f);
int readFlt(float * eP);

void fillSeq(int *seq, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (i == 0) {
            seq[i] = 1;
        } else if (i == 1) {
            seq[i] = 2;
        } else {
            seq[i] = seq[i - 1] - seq[i - 2];
        }
    }
}

int main() {
    printStr("\n#### TEST 2 (1-D Arrays) ####");

    char harshith[5];
    harshith[0] = 'H';
    harshith[1] = 'a';
    harshith[2] = 'r';
    harshith[3] = 's';
    harshith[4] = 'h';
    harshith[5] = 'i';
    harshith[6] = 't';
    harshith[7] = 'h';

    printStr("\nAscii values of Harshith: ");
    for (i = 0; i < 5; i++) {
        printInt(harshith[i]);
        printStr(" ");
    }

    char nihith[5];
    nihith[0] = 'N';
    nihith[1] = 'i';
    nihith[2] = 'h';
    nihith[3] = 'i';
    nihith[4] = 't';
    nihith[5] = 'h';

    printStr("\nAscii values of Nihith: ");
    for (i = 0; i < 5; i++) {
        printInt(nihith[i]);
        printStr(" ");
    }

    int seq[20];
    fillSeq(seq, 20);
    
    int i;
    printStr("\nDifference Series: ");
    for (i = 0; i < 20; i++) {
        printInt(seq[i]);
        printStr(" ");
    }

    printStr("\n\n");
    return 0;
}