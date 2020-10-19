//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, res = 0; cin >> n;
        vector<int> a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        for(int i = 0; i < n; ++i){
            int sa = 0, sb = 0, count = 1;
            for(int j = i; j < n; ++j, ++count){
                sa += a[j]; sb += b[j];
                if ( sa == sb ) res = max(res, count);
            }
        }
        cout << res << "\n";
    }
    return 0;
}
