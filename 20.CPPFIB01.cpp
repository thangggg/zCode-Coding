//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int f[1001];

void fibo(){
    f[0] = 0; f[1] = 1;
    for(int i = 2; i < 1001; ++i) f[i] = (f[i - 1] + f[i - 2])%MOD;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    fibo();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << f[n] << "\n";
    }
    return 0;
}
