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
int arr[101];
int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}
int g;
int main(){
    it();
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if(n == 2){
        g = arr[1] - arr[0];
    }
    for(int i = 2; i < n; i++){
        if(i == 2){
            g = gcd(arr[i - 1] - arr[0], arr[i] -  arr[0]);
        }
        else{
            g = gcd(g, arr[i] - arr[0]);
        }
    }
    for(int i = 2; i <= g; i++){
        if(g % i == 0) cout << i << ' ';
    }
}