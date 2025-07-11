#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void it(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
}

const int MAX = 1000000;
bool arr[MAX + 1];

void sieve(){
    fill(arr, arr + MAX + 1, false);
    arr[0] = arr[1] = true; // 0과 1은 소수가 아님
    for(int i = 2; i * i <= MAX; i++){
        if (!arr[i]){ // i가 소수라면
            for (int j = i * i; j <= MAX; j += i){ 
                arr[j] = true; // i의 배수는 소수가 아님
            }
        }
    }
}

int main(){
    it();
    sieve(); // 소수 판별

    while (true){
        int n;
        cin >> n;
        if (n == 0) break; // 입력이 0이면 종료

        bool found = false;
        for(int i = 3; i <= n / 2; i += 2){ // 3부터 홀수만 탐색 (짝수는 소수X)
            if (!arr[i] && !arr[n - i]){ // 두 수가 모두 소수라면
                cout << n << " = " << i << " + " << (n - i) << '\n';
                found = true;
                break;
            }
        }

        if (!found) cout << "Goldbach's conjecture is wrong.\n";
    }
}
