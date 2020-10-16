//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s[s.length() - 1] - '0', a[4] = {2, 4, 8, 6}, k = 0;
        for(auto i = s.rbegin() + 1; i != s.rend(); ++i){
            n += (a[k++] * int(*i - '0'));
            if ( k == 4) k = 0;
        }
        cout << ( n % 5 == 0 ? "Yes" : "No") << "\n";
    }
    return 0;
}
