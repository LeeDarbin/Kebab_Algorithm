#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int a, b;
int l , g;
int gcd(int x, int y){
    while(y){
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}
int main(){
    cin >> a>> b;
    g = gcd(a, b);
    cout << g << '\n';
    cout << a * b / g;
}