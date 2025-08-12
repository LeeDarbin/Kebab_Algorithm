#include <stdio.h>
#include <stdbool.h>

#define MAXN 100000

char st[MAXN];
int top = -1;

bool match(char open, char close){
    return (open=='(' && close==')') ||
           (open=='[' && close==']') ||
           (open=='{' && close=='}');
}

int main(void){
    char c;
    while ((c = getchar()) != EOF && c != '\n'){
        if (c=='('||c=='['||c=='{') st[++top]=c;
        else if (c==')'||c==']'||c=='}'){
            if (top==-1 || !match(st[top], c)){
                printf("INVALID\n");
                return 0;
            }
            top--;
        }
    }
    printf(top==-1 ? "VALID\n" : "INVALID\n");
    return 0;
}
