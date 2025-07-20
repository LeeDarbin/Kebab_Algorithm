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
    it();
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int cnt = 0;
        bool ans = true;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') {
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt < 0){
                ans = false;
                break;
            }
        }
        if(cnt != 0 || ans == false){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }
    }
}