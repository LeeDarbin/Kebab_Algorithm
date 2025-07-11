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
int arr[250000] = {1, 1};
int cnt[250000] = {0, 0, 1};
int main(){
    for(int i = 2; i < 250000; i++){
        if(arr[i]){
            cnt[i] = cnt[i - 1];
            continue;
        }
        else{
            cnt[i] = cnt[i - 1] + 1;
        }
        for(int j = 2; i * j < 250000; j++){
            arr[i * j] = 1;
        }
    }
    while(1){
        cin >> n;
        if(n == 0) return 0;
        cout << cnt[n * 2] - cnt[n] << endl;
    }
}