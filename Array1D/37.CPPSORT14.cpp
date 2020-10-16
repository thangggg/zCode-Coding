//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i =0; i< n;++i) cin >> a[i];
        sort(a.begin(), a.end());
        int res = 0;
        for(int i = 1; i < n; ++i) if ( a[i] - a[i - 1] > 1) res += (a[i] - a[i-1] - 1);
        cout << res << "\n";
    }
    return 0;
}
