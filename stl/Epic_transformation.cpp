#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }

        if(mx <= n / 2){
            cout << n % 2 << "\n";
        }
        else{
            int ans = n - mx;
            ans = ans * 2;
            cout << n - ans << "\n";
        }
    }
}