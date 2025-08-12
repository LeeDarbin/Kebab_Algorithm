#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

int n;
priority_queue<int>pq;
int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x == 0){
            if(pq.empty()){
                cout << 0 << '\n';
            }
            else{
                cout << -pq.top() << '\n';
                pq.pop();
            }
        }
        else{
            pq.push(-x);
        }
    }
}