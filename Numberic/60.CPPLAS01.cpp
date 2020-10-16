//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << ( n % 9 == 0 ? 9 : n % 9) << "\n";
    }
    return 0;
}
