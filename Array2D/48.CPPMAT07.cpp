//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0, a; i < n; ++i){
            vector<int> v;
            for(int j = 0; j < n; ++j){
                cin >> a;
                if (i & 1) v.push_back(a);
                else cout << a << " ";
            }
            if ( !v.empty() )
                for(auto it = v.rbegin(); it != v.rend(); ++it) cout << *it << " ";
        }
        cout << "\n";
    }
    return 0;
}
