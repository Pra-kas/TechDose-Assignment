#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    cout << n << " --> ";
    n &= ~(1 << k);
    cout << n;
}