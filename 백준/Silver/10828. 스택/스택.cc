#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
using namespace std;

int n;
string s;
int a;
stack<int>st;
int main(){
    cin >> n;
    while(n --){
        cin >> s;
        if(s == "push"){
            cin >> a;
            st.push(a);
        }
        else if (s == "pop"){
            if (st.empty()){
                printf("-1\n");
            }
            else{
                printf("%d\n", st.top());
                st.pop();
            }
        }
        else if(s == "size"){
            printf("%d\n", st.size());
        }
        else if (s == "empty"){
            printf("%d\n", st.empty()?1:0);
        }
        else{
            printf("%d\n", st.empty()?-1:st.top());
        }
    }
}