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
int a;
int g = 0;
int gcd(int x, int y){
    return y == 0? x : gcd(y, x % y);
}
int abs(int x){
    if(x < 0) return -x;
    return x;
}
int main(){
    it();
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(g == 0){
            g = abs(a - s);
        }
        else{
            g = gcd(g, abs(a - s));
        }
    }
    cout << g;
}