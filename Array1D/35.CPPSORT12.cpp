//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<long long> a(n), b(m);
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < m; ++i) cin >> b[i];
        cout << *max_element(a.begin(), a.end()) * *min_element(b.begin(), b.end()) << "\n";
    }
    return 0;
}
