//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int m, n, a, b; cin >> m >> n >> a >> b;
        int res = 0;
        for(int i = m; i <= n; ++i)
            if (!(i%a)||!(i%b)) res++;
        cout << res << "\n";
    }
    return 0;
}
