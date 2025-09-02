#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {

        if (a.first < b.first)
        {
            return true;
        }
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        set<pair<int, int>, cmp> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.insert({a,b});
        }

        for (auto it : v)
        {
            cout << it.first << " " << it.second << "\n";
        }
    }
}