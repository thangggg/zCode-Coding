//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int d[26] = {0};
        for(auto i : s) d[i - 'A']++;
        for(auto i : s) if (d[i-'A'] == 1) cout << i;
        cout << "\n";
    }
    return 0;
}
