//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if ( n < 2 ) return 0;
    for(int i = 2; i * i <= n; ++i)
        if ( n % i == 0) return 0;
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        static int x; cin >> x;
        vector<int> v(x);
        iota(v.begin(), v.end(), 1);
        cout << ( isPrime(count_if(v.begin(), v.end(), [](int i){return __gcd(i, x) == 1;})) ? 1 : 0) << "\n";
    }
    return 0;
}
