//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector <int> v;
        for(int i = 2; i * i <= n; ++i){
            while(n % i == 0) {
                v.push_back(i);
                n /= i;
            }
        }
        if ( n > 1) v.push_back(n);
        if ( k > v.size() ) cout << -1;
        else cout << v[k - 1];
        cout << "\n";
    }
    return 0;
}