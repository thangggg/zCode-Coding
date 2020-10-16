//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int ln = s.length();
        cout << (s[ln - 1] == '6' && s[ln - 2] == '8' ? 1 : 0) << "\n";
    }
    return 0;
}
