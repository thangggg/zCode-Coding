//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int solve(int x){
    if (!(x&1)) return 2;
    for(int i = 3; i * i <= x; i += 2) 
        if (x%i==0) return i;
    return x;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; ++i){
            cout << solve(i) << " ";
        }
        cout << "\n";
    }
    return 0;
}
