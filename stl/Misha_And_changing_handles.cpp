#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unordered_map<string,string>mp;
    int q;
    cin >> q;
    while(q--){
        string old, New;
        cin >> old >> New;
        mp[old] = New;
    }
 
    for(auto it : mp){
        string new_old = it.first;
        string new_new = it.second;
        while(mp.find(new_new) != mp.end()){
            mp[new_old] = mp[new_new];
            mp.erase(new_new);
            new_new = mp[new_old];
        }
    }
 
    cout << mp.size() << "\n";
 
    for(auto it : mp){
        cout << it.first << " " << it.second << "\n";
    }
 
}