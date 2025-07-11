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
int main(){
    cin >> n;
    int i = 2;
    while(n > 1){
        if(n % i == 0){
            cout << i << '\n';
            n /= i;
        }
        else{
            i++;
        }
    }
}