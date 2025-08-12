#include <stdio.h>
#include <stdbool.h>

#define MAXN 1000

typedef struct {
    int data[MAXN];
    int head, tail, size;
} Queue;

void init_q(Queue* q){ q->head=q->tail=q->size=0; }
bool empty_q(Queue* q){ return q->size==0; }
bool full_q(Queue* q){ return q->size==MAXN; }
bool push_q(Queue* q, int x){
    if(full_q(q)) return false;
    q->data[q->tail] = x;
    q->tail = (q->tail + 1) % MAXN;
    q->size++;
    return true;
}
bool pop_q(Queue* q, int* out){
    if(empty_q(q)) return false;
    *out = q->data[q->head];
    q->head = (q->head + 1) % MAXN;
    q->size--;
    return true;
}

int main(void){
    Queue q; init_q(&q);
    for (int i=1;i<=3;i++) push_q(&q, i);
    int v;
    while(pop_q(&q, &v)) printf("%d ", v);
    printf("\n");
    return 0;
}
