#include <stdio.h>
#include <stdbool.h>

#define MAXN 1000

typedef struct {
    int data[MAXN];
    int top;
} Stack;

void init(Stack* s){ s->top = -1; }
bool empty(Stack* s){ return s->top == -1; }
bool full(Stack* s){ return s->top == MAXN-1; }
bool push(Stack* s, int x){
    if (full(s)) return false;
    s->data[++s->top] = x;
    return true;
}
bool pop(Stack* s, int* out){
    if (empty(s)) return false;
    *out = s->data[s->top--];
    return true;
}

int main(void){
    Stack s; init(&s);
    for (int i=1;i<=3;i++) push(&s, i);
    int v;
    while(pop(&s, &v)) printf("%d ", v);
    printf("\n");
    return 0;
}
