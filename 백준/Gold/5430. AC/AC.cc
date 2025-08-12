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

int t;
int n;
string s, arr;
deque<int>d;
int main(){
    it();
    cin >> t;
    while(t--){
        cin >> s;
        cin >> n;
        cin >> arr;
        int k = -1;
        while(d.size()){
            d.pop_back();
        }
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= '0' && arr[i] <= '9'){
                if (k == -1){
                    k = 0;
                }
                k = k * 10 + arr[i] -'0';
            }
            else{
                if(k != -1){
                    d.push_back(k);
                    k = -1;
                }
            }
        }
        int temp = 1;
        bool er = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R'){
                temp *= -1;
            }
            else{
                if(d.size() == 0){
                    er = true;
                    break;
                }
                else{
                    if(temp == 1){
                        d.pop_front();
                    }
                    else{
                        d.pop_back();
                    }
                }
            }
        }
        if(er){
            cout << "error\n";
        }
        else if(d.size() == 0){
            cout << "[]\n";
        }
        else{
            cout << '[';
            while(d.size() > 1){
                if(temp == 1){
                    cout << d.front() << ",";
                    d.pop_front();
                }
                else{
                    cout << d.back() <<",";
                    d.pop_back();
                }
            }
            cout << d.front() << "]\n";
        }
    }
}