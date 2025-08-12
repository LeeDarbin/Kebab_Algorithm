#include <stdio.h>

long long memo[93]; // fib(92)까지 64-bit 안전

long long fib(int n){
    if (n<=1) return n;
    if (memo[n]) return memo[n];
    return memo[n] = fib(n-1) + fib(n-2);
}

int main(void){
    int n; if (scanf("%d",&n)!=1) return 0;
    printf("%lld\n", fib(n));
    return 0;
}
