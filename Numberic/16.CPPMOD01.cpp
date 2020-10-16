//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(ll x, int y, int p){
    x %= p;
    ll res = 1;
    while(y){
        if ( y&1 ) res = (res * x) % p;
        x = (x*x)%p;
        y >>= 1;
    }
    return int(res);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int y, p;
        ll x; cin >> x >> y >> p;
        cout << solve(x, y, p) << "\n";
    }
    return 0;
}
