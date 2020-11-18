// fibonacci 3
// day con fibo lon nhat
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()

void findFibSubset(vector<int> arr) 
{ 
    int max = *max_element(all(arr)); 
    int a = 0, b = 1; 
    unordered_set<int> hash; 
    hash.insert(a); hash.insert(b); 
    while (b < max) { 
        int c = a + b; 
        a = b; 
        b = c; 
        hash.insert(b); 
    } 
    for(auto i : arr)
        if ( hash.find(i) != hash.end()) cout << i << " ";
    cout << "\n";
} 

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        findFibSubset(a);
    }
    return 0;
}
