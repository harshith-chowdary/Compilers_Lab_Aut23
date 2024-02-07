int n1, n2;
char n3 = 'z';

void foo(int a, int b);
void foo(int a, int b) {
    bool c = (a > b);
    return;
}

int main() {
    int n1, n2 = 10, *n3;
    float f1, f2 = 6.9;
    char c1, c2[100];

    char *s1 = "Hello World !!", *s2;

    n1 = n2 = f1 = f2;
    c2[88] = c1;
    c1 = c2[99];

    s2 = strdup(s1);
    
    return 0;
}
