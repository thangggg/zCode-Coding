//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int sMAX = 1e6 + 1;
bitset<sMAX> p;

void sieve(){
    p.set(); p[0] = 0; p[1] = 0;
    for(int i = 2; i * i <= sMAX; ++i)
        if (p[i])
            for(int j = i * i; j <= sMAX; j += i) 
                p[j] = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    sieve();
    while(t--){
        ll l, r; cin >> l >> r;
        if ( l > r) swap(l,r);
        int res = 0, sr = sqrt(r);
        for(int i = l; i <= sr; ++i)
            if ( p[i] ) res++;
        cout << res << "\n";
    }
    return 0;
}
