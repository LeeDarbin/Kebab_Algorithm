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

int t;
int n;
int arr[10001];
int main(){
    it();
    for(int i = 2; i < 5000; i++){
        for(int j= 2; i * j < 10001; j++){
            arr[i * j] = 1;
        }
    }
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = n / 2; i < n; i++){
            if(arr[i] == 0 && arr[n - i] == 0){
                cout << n - i << ' ' << i << '\n';
                break;
            }
        }
    }
}