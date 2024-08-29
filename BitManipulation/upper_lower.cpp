#include <bits/stdc++.h>
using namespace std;

int main(){
    char x;
    cin >> x;
    cout << x << " --> ";
    if(x >= 'a' && x <= 'z') x &= ~(1 << 5);
    else x |= (1 << 5);
    cout << x;
    return 0;
}