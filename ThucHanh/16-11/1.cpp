// Tìm tập từ riêng của hai xâu
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; cin.ignore();
    while(t--){
        string a,b; 
        getline(cin, a); getline(cin, b);
        istringstream tka(a), tkb(b);
        vector<string> va, vb;
        while(tka >> a) va.push_back(a); 
        while(tkb >> b) vb.push_back(b);
        set<string> s;
        for(auto i : va){
            bool c = true;
            for(auto j : vb){
                if ( j == i ){
                    c = false;
                    break;
                }
            }
            if (c) s.insert(i);
        }
        for(auto i : s) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
