//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

string isBigger(string a, string b){
    int la = a.length(), lb = b.length();
    if ( la > lb) return a;
    if ( lb > la ) return b;
    for(int i = 0; i < la; ++i){
        if ( a[i] > b[i] ) return a;
        if ( b[i] > a[i] ) return b;
    }
    return a;
}

string substractTwoString(string a, string b){
    if ( isBigger(a, b) == b) swap(a, b);
    int la = a.length();
    while(b.length() != la) b = '0' + b;
    string res = "";
    for(int i = la - 1, carry = 0; i >= 0; --i){
        int t = (a[i] - '0') - (b[i] - '0') - carry;
        if ( t < 0){
            t += 10;
            carry = 1;
        } else carry = 0;
        res = char(t + '0') + res;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string x, y; cin >> x>> y;
        cout << substractTwoString(x, y) << "\n";
    }
    return 0;
}
