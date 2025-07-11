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

int n, m;
vector<int>v;
int vis[14];
void f(int a, int b){
    if(a == 0){
        for(int i:v){
            cout << i + 1 << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = b; i < n; i++){
        if(vis[i]) continue;
        vis[i] = 1;
        v.push_back(i);
        f(a - 1, i + 1);
        vis[i] = 0;
        v.pop_back();
    }
}
int main(){
    it();
    cin >> n >> m;
    f(m, 0);
}