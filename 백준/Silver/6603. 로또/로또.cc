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
int arr[14];
int vis[14];
void f(int a, int b){
    if(a == 0){
        for(int i:v){
            cout << i << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = b; i < n; i++){
        if(vis[i]) continue;
        vis[i] = 1;
        v.push_back(arr[i]);
        f(a - 1, i + 1);
        vis[i] = 0;
        v.pop_back();
    }
}
int main(){
    it();
    while(1){
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        f(6, 0);
        cout << '\n';
    }
}