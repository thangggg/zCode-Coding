// Module 5
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string n; cin >> n;
        long long m, res = 0; cin >> m;
        for(auto i : n) res = (res * 10 + i - '0') % m;
        cout << res << "\n";
    }
    return 0;
}
