#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
using namespace std;

int n,k;
queue<int>q;
int main(){
    cin >> n>>k;
    cout << '<';
    for(int i = 1; i<= n; i++){
        q.push(i);
    }
    while(q.size() > 1){
        for(int i = 1; i < k;i ++){
            q.push(q.front());
            q.pop();
        }
        printf("%d, ",q.front());
        q.pop();
    }
    printf("%d>",q.front());
}