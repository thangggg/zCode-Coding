//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, x, tmp, res = 0; cin >> n >> x;
        for(int i = 0; i < n; ++i){
            cin >> tmp;
            if ( tmp == x) res++;
        }
        if ( res == 0 ) cout << -1 << "\n";        
        else cout << res << "\n";
    }
    return 0;
}
