//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; cin.ignore();
    while(t--){
        string s; getline(cin, s); 
        istringstream tk(s);
        int res = 0;
        while(tk >> s) res++;
        cout << res << "\n";
    }
    return 0;
}
