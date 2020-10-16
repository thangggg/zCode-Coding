//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, q, l, r; cin >> n >> q;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        while(q--){
            cin >> l >> r;
            int sum = 0;
            for(int i = l - 1; i < r; ++i) sum += a[i];
            cout << sum << "\n";
        }
    }
    return 0;
}
