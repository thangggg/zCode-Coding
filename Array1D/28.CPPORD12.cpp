//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

vector<int> a; int n;

int solve(){
    sort(a.begin(), a.end());
    if ( a[0] != 1) return 1;
    int len = a.size();
    for(int i = 1; i < len; ++i) if ( a[i] - a[i-1] > 1) return a[i-1] + 1;
    return a[len - 1] + 1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n; a.clear();
        for(int i = 0, tmp; i < n; ++i){
            cin >> tmp;
            if ( tmp > 0 ) a.push_back(tmp);
        }
        cout <<  solve() << "\n";
    }
    return 0;
}
