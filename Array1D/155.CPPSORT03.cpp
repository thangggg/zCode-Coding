// Sorting 3
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int findMinSwap(vector<int> arr, int n) { 
    vector<pair<int,int>> v(n); 
    for(int i=0; i < n; ++i) { 
        v[i].first=arr[i]; 
        v[i].second=i; 
    } 
    sort(v.begin(),v.end()); 
    int res = 0; 
    for(int i=0; i<n; ++i) {    
        if(v[i].second==i) continue; 
        else { 
            swap(v[i].first,v[v[i].second].first); 
            swap(v[i].second,v[v[i].second].second);  
        }  
        if(i!=v[i].second) i--; 
        res++; 
    } 
    return res; 
} 
  

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        cout << findMinSwap(a, n) << "\n";
    }
    return 0;
}
