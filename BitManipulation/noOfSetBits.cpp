#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // O(1) approach
    cout << __builtin_popcount(n) << endl;
    // O(no of setbits)
    int ans = 0;
    while(n){
        n = n & (n-1);
        ans++;
    }
    cout << ans << endl;
}