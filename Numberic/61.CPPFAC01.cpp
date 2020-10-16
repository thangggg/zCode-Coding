//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string a,res = ""; cin >> a;
        for(auto i : a){
            if ( i == '2' || i == '3' || i == '5' || i == '7') res += i;
            else if (i == '4') res += "322";
            else if ( i == '6') res += "53";
            else if ( i == '8') res += "7222";
            else if (i == '9') res += "7332"; 
        }
        sort(res.begin(), res.end(), greater<int>());
        cout << res << "\n";
    }
    return 0;
}
