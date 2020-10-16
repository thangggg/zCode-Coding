//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0, a; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cin >> a;
                if ( i == 0 || i == n - 1 || j == 0 || j == n - 1 ) cout << a << " ";
                else cout << "  ";
            }
            cout << "\n";
        }
    }
    return 0;
}