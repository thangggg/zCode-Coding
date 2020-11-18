// Modulo 1
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        long long x, y, p; cin >> x >> y >> p;
        long long res = 1;
        while(y){
            if ( y&1 ) res = (res * x) % p;
            x = x * x % p;
            y >>= 1;
        }
        cout << res << "\n";
    }
    return 0;
}
