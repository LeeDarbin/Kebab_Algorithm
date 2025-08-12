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
queue<int>q;
int main(){
    cin >> n;
    while(n--){
        cin >> s;
        if(s == "push"){
            cin >> a;
            q.push(a);
        }
        else if(s == "pop"){
            if(!q.empty()) {
                cout << q.front() << '\n';
                q.pop();
            }
            else{
                cout << -1 << '\n';
            }

        }
        else if (s == "size"){
            cout << q.size() << '\n';
        }
        else if(s == "empty"){
            cout << (q.empty()?1:0) << '\n';
        }
        else if (s == "front"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
            }
        }
        else{
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.back() << '\n';
            }
        }
    }
}