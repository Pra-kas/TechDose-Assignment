#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string answer = (n & (1 << k)) ? "Set" : "Unset";
    cout << answer;
    return 0;
}