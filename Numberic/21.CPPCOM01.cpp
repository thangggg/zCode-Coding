//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int n, a[21];

void printResult(){
    for(int i = 0; i < n; ++i) cout << a[i];
    cout << " ";
}

void Try(int i){
    if ( i == n ) {
        printResult();
        return;
    }
    a[i] = 0;
    Try(i + 1);
    a[i] = 1;
    Try(i + 1);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(0);
        cout << "\n";
    }
    return 0;
}
