bool question(int m, int K){
    return A[m] >= K;
}

int binarySearch(int K){
    int ng = -1;
    int ok = N;
    while(ok - ng > 1){
        int m = (ng + ok) / 2;
        if(question(m, K)) ok = m;
        else ng = m;
    }
    return ok;
}
