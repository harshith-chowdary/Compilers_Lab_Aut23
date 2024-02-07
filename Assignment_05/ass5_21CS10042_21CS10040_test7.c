int mod;

int fast_mul(int a, int b) {
	return ((a % mod) * (b % mod)) % mod;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a = 8, b = 3;
    gcd(++a, b--);
    fast_mul(a, b);
    return 0;
}
