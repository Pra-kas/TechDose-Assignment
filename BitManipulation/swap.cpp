#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << a << " " << b << "\n";
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << "\n";
    return 0;
}