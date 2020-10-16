//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k, sum = 0; cin >> n >> k;
        for(ll i = 1; i <= n; ++i){
            sum += (i % k);
        }   
        cout << sum << "\n";
    }
    return 0;
}
