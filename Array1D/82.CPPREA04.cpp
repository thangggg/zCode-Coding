// re-arrange array 4
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), odds, evens;
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        int mid = n / 2;
        if ( n & 1 ) mid++;
        for(int i = 0; i < n/2; ++i) cout << a[i] << " " << a[mid++] << " ";
        if ( n & 1) cout << a[n/2];
        cout << "\n";
    }
    return 0;
}