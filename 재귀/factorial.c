#include <stdio.h>

long long fact(int n){
    if (n<=1) return 1;
    return (long long)n * fact(n-1);
}

int main(void){
    int n; if (scanf("%d",&n)!=1) return 0;
    printf("%lld\n", fact(n));
    return 0;
}
