//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        int res = INT_MAX; 
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                if (abs(res) > abs(a[j] + a[i])) res = a[j] + a[i];
            }
        }
        cout << res << "\n";
    }
    return 0;
}
