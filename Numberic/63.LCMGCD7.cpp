//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a, ll b) {return a / __gcd(a, b) * b;}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll x, y, z, n; cin >> x >> y >> z >> n;
        ll res = (ll)pow(10, n - 1), lcmXYZ = lcm(lcm(x, y), z), r = res % lcmXYZ;
        if (r) res = res - r + lcmXYZ;
        cout << (int(log10(res) + 1) == n ? res : -1) << "\n";
    }
    return 0;
}
