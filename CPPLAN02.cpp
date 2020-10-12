//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

string sumTwoString(string a, string b){
    if ( a.length() < b.length() ) swap(a, b);
    int la = a.length();
    while(b.length() != la) b = '0' + b;
    int carry = 0; string res = "";
    for(int i = la - 1; i >= 0; --i){
        int tmp = (a[i] - '0') + (b[i] - '0') + carry;
        carry = tmp / 10;
        res = char(tmp % 10 + '0') + res;
    }
    if ( carry ) res = '1' + res;
    return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string x, y; cin >> x >> y;
        cout << sumTwoString(x, y) << "\n";
    }
    return 0;
}
