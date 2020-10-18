//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

const int sMAX = 1e5 + 1;
int d[sMAX];

void init(){
    d[1] = 1;
    for(int i = 2; i < sMAX; ++i){
        if (!(i&1)) d[i] = 2;
        else if (!d[i])
            for(int j = i; j < sMAX; j = j + i + i)
                if(!d[j]) 
                    d[j] = i;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    init(); 
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; ++i)
            cout << d[i] <<" ";
        cout << "\n";
    }
    return 0;
}
