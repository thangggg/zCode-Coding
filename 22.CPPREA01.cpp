//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, t; cin >> n;
        vector<long long> a(n),res(n, -1);
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i)
            if ( find(a.begin(), a.end(), i) != a.end() ) 
                res[i] = i;
        for(auto i : res) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
