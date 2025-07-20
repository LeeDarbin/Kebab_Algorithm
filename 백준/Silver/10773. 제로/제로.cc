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

vector<int>v;
int k, n;
int main(){
    it();
    cin >> k;
    while(k--){
        cin >> n;
        if(n){
            v.push_back(n);
        }
        else{
            v.pop_back();
        }
    }
    int sum = 0;
    for(int i :v){
        sum += i;
    }
    cout << sum;
}