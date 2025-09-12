#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,string>mp;
    int n;
    cin >> n;
    while(n--){
        string a, b;
        cin >> a >> b;
        mp[b] = a;
    }
    int q;
    cin >> q;
    while(q--){
        string ans;
        cin >> ans;
        if(mp.find(ans) != mp.end()){
            cout << mp[ans] << "\n";
        }
        else{
            cout << "eh\n";
        }
    }
}