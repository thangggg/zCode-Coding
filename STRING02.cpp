//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; getline(cin, s);
    istringstream tk(s); vector<string> v;
    while(tk >> s) v.push_back(s);
    string t = v.back(); v.pop_back(); // ten
    for(auto i : t) cout << (i |= ' ');
    for(auto i : v) cout << (i[0] |= ' ');
    cout << "@ptit.edu.vn";
    return 0;
}
