#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// 에라토스테네스의 체
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n < 2) { printf("no primes\n"); return 0; }

    bool *is_prime = malloc((n+1) * sizeof(bool));
    for (int i = 0; i <= n; ++i) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p*p <= n; ++p) {
        if (is_prime[p]) {
            for (int x = p*p; x <= n; x += p) is_prime[x] = false;
        }
    }

    for (int i = 2; i <= n; ++i) if (is_prime[i]) printf("%d ", i);
    printf("\n");
    free(is_prime);
    return 0;
}
