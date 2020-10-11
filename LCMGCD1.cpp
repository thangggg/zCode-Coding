//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        ll gcd = __gcd(a, b);
        cout << a / gcd * b << " " << gcd << "\n";
    }
    return 0;
}