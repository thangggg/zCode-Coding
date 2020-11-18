// Large Number 3
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

void solve(string x, string y){
    vector<int> res(x.length() + y.length(), 0);
    int ix = 0;
    for(auto i = x.rbegin(); i != x.rend(); ++i, ++ix){
        int iy = 0, carry = 0;
        for(auto j = y.rbegin(); j != y.rend(); ++j, ++iy){
            int tmp = (*i - '0') * (*j - '0') + carry + res[ix + iy];
            carry = tmp / 10;
            res[ix + iy] = tmp%10;
        }
        if ( carry ) res[ix + iy] += carry;
    }
    while( !res.empty() && !res.back() ) res.pop_back();
    if ( res.empty() ) cout << 0;
    else 
        for(auto i = res.rbegin(); i != res.rend();++i) cout << *i;
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string x,y; cin >> x >> y;
        solve(x, y);
    }
    return 0;
}
