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

int n, s;
int arr[21];
int cnt;
void f(int a, int b){
    if(a && b == s){
        cnt++;
    }
    for(int i = a; i < n; i++){
        f(i + 1, b + arr[i]);
    }
}
int main(){
    it();
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    f(0, 0);
    cout << cnt;
}