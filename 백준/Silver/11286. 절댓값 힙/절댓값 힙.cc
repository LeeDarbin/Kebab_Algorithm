#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;
void it(){
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(0);
}

int n;
priority_queue<pair<int, int>>pq;
int x;
int main(){
    it();
    cin >> n;
    while(n--){
        cin >> x;
        if(x == 0){
            if(pq.empty()){
                cout << 0 << '\n';
            }
            else{
                cout << pq.top().first * pq.top().second << '\n';
                pq.pop();
            }
        }
        else{
            if(x < 0){
                pq.push({x, 1});
            }
            else{
                pq.push({-x, -1});
            }
        }
    }
}