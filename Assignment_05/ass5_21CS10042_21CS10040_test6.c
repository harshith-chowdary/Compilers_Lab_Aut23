int main() {
    int i, j, k;

    // for loop
    for(i = 0; i < k; i++) {
        for(j = 0; j < i; ++j) {
            k = k - j;
        }
    }

    // while loop
    while(i < j && j < k) {
        i++, k--;
    }

    // do while loop
    do {
        i = k++;

        // nested while
        while(i < 2*k)
            k--;
    }while(i<=k);

    return 0;
}
