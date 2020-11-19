// Module 6
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll powerLL (ll a, ll b, ll m){
    ll res = 1;
    while(b){
        if ( b & 1) res = res * a % m;
        a  = a * a % m;
        b >>= 1;
    }
    return res % m;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string sa; cin >> sa;
        ll b,m, a = 0; cin >> b >> m;
        for(auto i : sa) a = (a*10 + i-'0')%m; 
        cout << powerLL(a, b, m) << "\n";
    }
    return 0;
}
