// Large Number 2
// X + y 
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

string sumXY(string x, string y){
    while(x.length() < y.length()) x = "0" + x;
    while(y.length() < x.length()) y = "0" + y;
    int lx = x.length(), carry = 0;
    string res = "";
    for(int i = lx - 1; i >= 0; --i){
        int tmp = (x[i] - '0') + (y[i] - '0') + carry;
        carry = tmp/10;
        res = char(tmp%10 + '0') + res;
    }
    if ( carry > 0) res = "1" + res;
    return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string x, y; cin >> x >> y;
        cout << sumXY(x, y) << "\n";
    }
    return 0;
}
