//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

const int sMAX = 1e4 + 1; // 10^4 + 1

bitset<sMAX> p;  // 0 1

void sieve(){
    p.set(); // 1
    p[0] = 0; p[1] = 0;
    for(int i = 2; i * i <= sMAX; ++i)
        if (p[i])
            for(int j = i * i; j <= sMAX; j += i) 
                p[j] = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    sieve();
    int l, r; cin >> l >> r;
    if ( l > r) swap(l, r);
    for(int i = l; i <= r; ++i) if (p[i]) cout << i << " ";
    return 0;
}
