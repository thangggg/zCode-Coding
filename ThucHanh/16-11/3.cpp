// Large Number 1
// |X-Y|
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

string isBigger(string x, string y){
    int lx = x.length(), ly = y.length();
    if ( lx > ly ) return x;
    if ( ly > lx ) return y;
    for(auto i : x){
        for(auto j : y){
            if ( i > j ) return x;
            if ( j > i ) return y;
        }
    }
    return x;
}
 
string diffXY(string x, string y){
    string res = "";
    if ( isBigger(x,y) == y ) swap(x, y);
    int lx = x.length();
    while(y.length() != lx) y = "0" + y;
    int carry = 0;
    for(int i = lx -1 ; i >= 0; --i){
        int tmp = (x[i] - '0') - (y[i] - '0') - carry;
        if ( tmp < 0 ) {
            tmp += 10;
            carry = 1;
        } else carry = 0;
        res = char(tmp%10 + '0') + res;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string x, y;
        cin >> x >> y;
        cout << diffXY(x, y) << "\n";
    }
    return 0;
}
