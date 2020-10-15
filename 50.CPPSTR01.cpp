//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int k; cin >> k;
        vector<int> a(26, 0);
        for(auto i : s) a[i - 'a']++;
        cout << ( count(a.begin(), a.end(), 0) <= k ? 1 : 0 )  << "\n";
    }
    return 0;
}
