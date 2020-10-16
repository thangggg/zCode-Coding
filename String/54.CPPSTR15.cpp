//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int res = s.length();
        for(auto i = s.begin(); i != s.end(); ++i) res += count(i + 1, s.end(), *i);
        cout << res << "\n";
    }
    return 0;
}
