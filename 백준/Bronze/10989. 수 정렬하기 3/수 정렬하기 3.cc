#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int n;
int arr[10001];
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[a]++;
    }
    for(int i = 1; i < 10001; i++){
        while(arr[i]--){
            cout << i << '\n';
        }
    }
}