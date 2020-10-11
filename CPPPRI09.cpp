//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        for(ll i = 2; i * i <= n; ++i){
            int ep = 0;
            while(n % i == 0) {
                ep++;
                n /= i;
            }
            if ( ep != 0 ) cout << i << " " << ep << " ";
        }
        if ( n > 1) cout << n << " 1"; 
        cout << "\n";
    }
    return 0;
}