#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                v.push_back(x);
            }
            else
            {
                while (!v.empty() && v.back() != x - 1)
                {
                    v.pop_back();
                }
                v.back()++;
            }

            for (int j = 0; j < v.size(); j++)
            {
                if (j > 0)
                {
                    cout << '.';
                }
                cout << v[j];
            }
            cout << "\n";
        }
    }
}