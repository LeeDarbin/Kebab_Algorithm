#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <math.h>
using namespace std;

int t;
queue<pair<int, int> >q;
bool compare(pair<int, int> x, pair<int, int> y){
    if(x.first == y.first) return x.second < y.second;
    return x.first > y.first;
}
int main(){
    cin >> t;
    while(t--){
        int n, m;
        int cnt = 0;
        cin >> n >> m;
        while(!q.empty())q.pop();
        vector<pair<int, int> >v = {};
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            q.push(make_pair(a, i));
            v.push_back(make_pair(a, i));
        }
        sort(v.begin(), v.end(), compare);
        for(auto au:v){
            cnt++;
            while(true){
                if(q.front().first == au.first){
                    if(q.front().second == m){
                        cout << cnt << '\n';
                    }
                    q.pop();
                    break;
                }
                else{
                    q.push(q.front());
                    q.pop();
                }
            }
        }
    }
}