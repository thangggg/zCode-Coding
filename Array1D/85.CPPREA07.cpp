// Re-arrange 7
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; ++i) cin >> v[i];
        sort(v.begin(), v.end(), [](string x, string y){return x+y > y+x;});
        for(auto i : v) cout << i;
        cout << "\n";
    }
    return 0;
}
