#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int n;
vector<pair<int, string> >v;
bool compare(pair<int, string> x, pair<int, string> y){
    return x.first < y.first;
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        string b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    stable_sort(v.begin(), v.end(), compare);
    for(int i = 0; i < n; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}
