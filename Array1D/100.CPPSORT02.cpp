// Sorting 2
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int n, x;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        stable_sort(a.begin(), a.end(), [](int a1, int a2){return abs(a1-x) < abs(a2-x);});
        for(auto i : a) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
