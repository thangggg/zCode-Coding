// x * y
//Cre: thangggg
#include <bits/stdc++.h>
using namespace std;

string multXY(string num1, string num2) 
{ 
    vector<int> result(num1.size() + num2.size(), 0); 
    int i_n1 = 0, i_n2 = 0;
    for(auto i = num1.rbegin(); i != num1.rend(); ++i){
        int carry = 0; 
        i_n2 = 0;  
        for(auto j = num2.rbegin(); j != num2.rend(); ++j){
            int sum = (*i - '0') * (*j - '0') + result[i_n1 + i_n2] + carry; 
            carry = sum/10; 
            result[i_n1 + i_n2] = sum % 10; 
            i_n2++;
        }
        if (carry > 0) result[i_n1 + i_n2] += carry; 
        i_n1++; 
    }
    int i = result.size() - 1; 
    while (i>=0 && !result[i]) i--; 
    if (i == -1) return "0"; 
    string s = ""; 
    while (i >= 0) s += to_string(result[i--]); 
    return s; 
} 

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string x, y; cin >> x >> y;
        cout << multXY(x, y) << "\n";
    }
    return 0;
}
