//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int sMAX = n * k;
        vector <int> a(sMAX);
        for(int i = 0; i < sMAX; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        for(auto i : a) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
