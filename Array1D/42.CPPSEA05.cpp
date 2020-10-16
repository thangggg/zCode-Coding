//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        if ( n < 2 ) { cout << -1; break; }
        int fi = a[0], se = a[1];
        for(int i = 1; i < n; ++i){
            if ( a[i] < fi){
                se = fi;
                fi = a[i];
            }
            else if ( a[i] < se) se = a[i];
        }
        if ( fi == se) cout << -1 << "\n";
        else cout << fi << " " << se << "\n";
    }
    return 0;
}
