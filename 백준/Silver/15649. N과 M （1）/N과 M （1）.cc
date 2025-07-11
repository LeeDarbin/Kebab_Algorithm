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
bool vis[10];
vector<int>v;
void f(int a){
    for(int i = 1; i <= n; i++){
        if(vis[i] == false){
            if(a == 1){
                for(int j:v){
                    cout << j << ' ';
                }
                cout << i << '\n';
            }
            else{
                v.push_back(i);
                vis[i] = true;
                f(a - 1);
                v.pop_back();
                vis[i] = false;
            }
        }
    }
}
int main(){
    it();
    cin >> n >> m;
    f(m);

}