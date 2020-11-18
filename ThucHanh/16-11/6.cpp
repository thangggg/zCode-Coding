//modulo 2 
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int a, m;

int solve(){
    for(int x = 0; x < m; ++x)
        if ( a * x % m == 1) return x;
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> a >> m;
        cout << solve() << "\n";
    }
    return 0;
}
