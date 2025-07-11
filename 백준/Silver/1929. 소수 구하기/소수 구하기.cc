#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[1000001] = {1, 1};
int main(){
    cin >> n >> m;
    for(int i = 2; i<=m; i++){
        if(arr[i] == 0){
            if(i >= n){
                cout << i << '\n';
            }
            for(int j = 2; j * i <= m; j++){
                arr[i * j] = 1;
            }
        }
    }
    
}