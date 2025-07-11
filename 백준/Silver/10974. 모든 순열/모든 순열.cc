#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>
#include <cstring>
#include <cmath>
using namespace std;
void it(){
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(0);
}

int n;
vector<int>v;
int vis[10];
void f(int a){
    for(int i = 1; i <= n; i++){
        if(vis[i]) continue;
        if(a == 1){
            for(int j:v){
                cout << j << ' ';
            }
            cout << i << '\n';
            break;
        }
        vis[i] = 1;
        v.push_back(i);
        f(a - 1);
        vis[i] = 0;
        v.pop_back();
    }
}
int main(){
    cin >> n;
    f(n);
}