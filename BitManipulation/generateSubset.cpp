#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto & i : v) cin >> i;
    for(int i = 0 ; i < (1 << n) ; i++){
        cout << "{";
        for(int j = 0 ; j < n ; j++){
            if(i & (1 << j)) cout << v[j];
            if(j != n -1) cout << ',';
        }
        cout << "}\n";
    }
    return 0;
}