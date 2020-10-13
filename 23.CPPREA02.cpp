//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <long long> a(n), res(n, 0);
        for(int i = 0; i < n; ++i) cin >> a[i];
        int j = 0;
        for(auto i : a) if ( i != 0 ) res[j++] = i;
        for(auto i : res) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
