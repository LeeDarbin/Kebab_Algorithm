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
int arr[201][201];
int blue, white;
int dx[4] = {0, 1, 1, 0};
int dy[4] = {0, 0, 1, 1};
int bw(int a, int b, int t){
    int bc = 0;
    int wc = 0;
    if(t == 1){
        return arr[a][b];
    }
    else{
        int da[4] = {0, 0, t / 2, t / 2};
        int db[4] = {0, t / 2, 0, t / 2};
        for(int i = 0; i < 4; i++){
            int temp = bw(a + da[i], b + db[i], t / 2);
            if(temp == 1){
                bc++;
            }
            else if(temp == 0){
                wc++;
            }
        }
        if(bc == 4){
            if (t == n){
                blue++;
            }
            return 1;
        }
        else if(wc == 4){
            if(t == n){
                white++;
            }
            return 0;
        }
        else{
            blue += bc;
            white += wc;
            return -1;
        }
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    bw(0, 0, n);

    cout << white << '\n';
    cout << blue;
}