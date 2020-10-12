//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s,x; getline(cin, s); cin >> x;
    istringstream tk(s); vector<string> v;
    while(tk >> s) v.push_back(s);
    for(auto i = v.begin(); i != v.end(); ++i){
        if ( *i == x){
            v.erase(i);
            break;
        } 
    } 
    for(auto i : v) cout << i << " ";
    return 0;
}
