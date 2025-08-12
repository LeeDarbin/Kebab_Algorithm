#include <stdio.h>
#include <ctype.h>

#define MAXN 1000
int st[MAXN], top=-1;

int main(void){
    // 공백으로 구분된 토큰의 후위표기식 예: "2 3 + 4 *"
    int ch;
    int num=0, in_num=0;
    while((ch=getchar())!=EOF){
        if (isdigit(ch)){
            in_num=1;
            num = num*10 + (ch - '0');
        } else {
            if (in_num){
                st[++top]=num; num=0; in_num=0;
            }
            if (ch=='+'||ch=='-'||ch=='*'||ch=='/'){
                int b=st[top--], a=st[top--];
                int r = (ch=='+')? a+b : (ch=='-')? a-b : (ch=='*')? a*b : a/b;
                st[++top]=r;
            }
        }
    }
    if (in_num) st[++top]=num;
    printf("%d\n", st[top]);
    return 0;
}
