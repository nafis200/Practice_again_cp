#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<pair<int,int>,vector<string>>v;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        v[{a,b}].push_back(s);
    }

    for(auto &it : v){
        reverse(it.second.begin(),it.second.end());
    }


    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        string ans = v[{a,b}][0];
        cout << ans << "\n";
    }

}