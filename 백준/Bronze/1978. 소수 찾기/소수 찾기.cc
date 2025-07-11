#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int arr[1001] = {1, 1};
int m, cnt;
int main(){
    cin >> n;
    for(int i = 2; i<1001; i++){
        if(arr[i] == 0){
            for(int j = 2; j * i < 1001; j++){
                arr[i * j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cin >> m;
        if(arr[m] == 0) cnt++;
    }
    cout << cnt;
}