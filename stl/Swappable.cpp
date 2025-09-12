#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    map<long long, long long>mp;

    long long ans = (n * (n - 1)) / 2;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        mp[a]++;
    }

    for(auto it : mp){
        ans -= (it.second * (it.second - 1)) / 2;
    }

    cout << ans << "\n";

}
