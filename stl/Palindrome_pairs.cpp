// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<string> arr(n);

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     unordered_map<int, long long> freq;
//     long long ans = 0;

//     for (int i = 0; i < n; i++) {
//         int mask = 0;
//         for (char c : arr[i])
//             mask ^= (1 << (c - 'a'));

//         if (freq.count(mask))
//             ans += freq[mask];

//         for (int b = 0; b < 26; b++) {
//             int temp = mask ^ (1 << b);
//             if (freq.count(temp))
//                 ans += freq[temp];
//         }

//         freq[mask]++;
//     }

//     cout << ans << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    unordered_map<int, long long> mp;
    long long ans = 0;
    while (n--)
    {
        string s;
        cin >> s;
        long long mask = 0;
        for (char c : s)
        {
            mask ^= (1 << (c - 'a'));
        }
        if (mp.find(mask) != mp.end())
        {
            ans += mp[mask];
        }

        for (int b = 0; b < 26; b++)
        {
            long long temp = mask ^ (1 << b);
            if (mp.find(temp) != mp.end())
            {
                ans += mp[temp];
            }
        }

        mp[mask]++;
    }
    cout << ans << "\n";
}