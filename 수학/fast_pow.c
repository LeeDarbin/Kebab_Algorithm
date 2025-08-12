#include <stdio.h>

// 빠른 거듭제곱: a^n (모듈러 없음 버전)
long long fast_pow(long long a, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res *= a;
        a *= a;
        n >>= 1;
    }
    return res;
}

int main(void) {
    long long a, n;
    if (scanf("%lld %lld", &a, &n) != 2) return 0;
    printf("%lld\n", fast_pow(a, n));
    return 0;
}
