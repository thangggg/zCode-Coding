//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        int cnt = 0;
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                if ( a[i] + a[j] == k) cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
