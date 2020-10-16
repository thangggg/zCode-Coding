//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a){
    if ( a[0] != 1) return 1;
    for(int i = 1; i < a.size(); ++i){
        if ( a[i] - a[i-1] > 1) return a[i - 1] + 1;
    }
    return a[a.size() - 1] + 1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        cout << find(a.begin(), a.end(), x) - a.begin() + 1<< "\n";
    }
    return 0;
}
