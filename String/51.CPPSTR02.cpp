//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int sOdds = 0, sEvens = 0;
        for(int i = 0; i < s.length(); ++i){
            if ( i & 1) sOdds += int(s[i] - '0');
            else sEvens += int(s[i] - '0');
        }
        cout << (abs(sOdds - sEvens) % 11 == 0 ? 1 : 0) << "\n";
    }
    return 0;
}
