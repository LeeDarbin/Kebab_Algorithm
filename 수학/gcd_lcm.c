#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

long long gcd(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a < 0 ? -a : a;
}

long long lcm(long long a, long long b) {
    assert(a != 0 && b != 0);
    return llabs(a / gcd(a, b) * b);
}

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) return 0;
    printf("GCD(%lld,%lld) = %lld\n", a, b, gcd(a,b));
    if (a != 0 && b != 0)
        printf("LCM(%lld,%lld) = %lld\n", a, b, lcm(a,b));
    else
        printf("LCM defined only for non-zero integers.\n");
    return 0;
}
