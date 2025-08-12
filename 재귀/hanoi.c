#include <stdio.h>

void hanoi(int n, char from, char aux, char to){
    if (n==0) return;
    hanoi(n-1, from, to, aux);
    printf("%c -> %c\n", from, to);
    hanoi(n-1, aux, from, to);
}

int main(void){
    int n; if (scanf("%d",&n)!=1) return 0;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
