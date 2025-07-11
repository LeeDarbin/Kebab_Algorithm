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
int arr[1000001] = {1, 1};
int main(){
    for(int i = 2; i < 1000001; i++){
        for(int j = 2; j * i < 1000001; j++){
            arr[i * j] = 1;
        }
    }
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        int cnt = 0;
        for(int i = m / 2; i <= m; i++){
            if(arr[i] == 0 && arr[m - i] == 0)cnt++;
        }
        cout << cnt << '\n';
    }
}