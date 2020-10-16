//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s,sub;
    getline(cin, s); cin >> sub;
    s.erase(s.find(sub), sub.size());
    cout << s;
    return 0;
}
