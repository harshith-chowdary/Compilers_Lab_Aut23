int main() {
    int i, j, k, l;
    
    if(i <= j || k >= l) {
        j = i;
        l = k;

        if(i < l && j > k)
            j = k;
        else if(i != j || k == l)
            i = l;
        else
            i = k;

        if(i >= k) 
            k = i;
        if(l >= j) 
            j = l;
    }
    return 0;
}
