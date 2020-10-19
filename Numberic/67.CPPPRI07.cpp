//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    vector<int> di;
    for(int i = 2; i * i <= n; ++i){
        if ( n % i == 0){
            di.push_back(i);
            n /= i;
            if ( n % i == 0 ) return 0;
        }
    }
    return n > 1 ? di.size() == 2 : di.size() == 3;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}
