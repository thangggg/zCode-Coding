//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    const int sMAX = 1e6 + 1;
    while(t--){
        int n, d[sMAX] = {0}, ok = 1; cin >> n;
        for(int i = 0, a; i < n; ++i){
            cin >> a;
            d[a]++;
            if ( ok && d[a] > 1) {
                cout << a << "\n";
                ok = 0;
            }
        }
        if(ok) cout << -1 << "\n";
    }
    return 0;
}
