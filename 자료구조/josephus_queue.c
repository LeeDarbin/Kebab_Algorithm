#include <stdio.h>
#include <stdbool.h>

#define MAXN 100000

int q[MAXN];
int head=0, tail=0, size_q=0, cap=MAXN;

void push(int x){
    q[tail]=x; tail=(tail+1)%cap; size_q++;
}
int pop(){
    int v=q[head]; head=(head+1)%cap; size_q--; return v;
}

int main(void){
    int n, k; // n명, k번째 탈락
    if (scanf("%d %d", &n, &k) != 2) return 0;
    for (int i=1;i<=n;i++) push(i);
    printf("<");
    while(size_q>1){
        for(int i=1;i<k;i++){ push(pop()); }
        int out = pop();
        printf("%d, ", out);
    }
    printf("%d>\n", pop());
    return 0;
}
