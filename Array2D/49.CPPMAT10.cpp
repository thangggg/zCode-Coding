//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) cin >> a[i][j];
        vector<vector<int>> res(a.begin(), a.end());
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j) {
                if ( a[i][j] == 1){
                    for(int v = 0; v < m; ++v) res[i][v] = 1;
                    for(int v = 0; v < n; ++v) res[v][j] = 1;
                }
            }
        }
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j) cout << res[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}
