int main() {
    int n1, n2, n3;
    float f1, f2, f3;
    
    n2 = n1 << 1;
    n1 = n2 >> 1;

    n2 = n1 ^ n3;
    n2 = (n1 & n2) | (n2 & n3) | (n3 & n1);

    n3 = n1 * n3 / f2;
    f2 = f1 + (n1 -n2 -n3) * f2 + f3/n3;
    return 0;
}
