#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <math.h>
using namespace std;

int n;
stack<int>s;
queue<char>q;
int num = 1;
bool pu = true;
int main(){
    cin >> n;
    for(int i = 0;i < n; i++){
        int a;
        cin >> a;
        while(num <= a){
            s.push(num++);
            q.push('+');
        }
        if(s.top() == a){
            s.pop();
            q.push('-');
        }
        else{
            pu = false;
        }
    }
    if(pu){
        while(!q.empty()){
            cout << q.front() << '\n';
            q.pop();
        }
    }
    else{
        cout << "NO";
    }
}