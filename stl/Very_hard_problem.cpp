#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a, ans;
        deque<int> q;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        for (int i = 0; i < (int)a.size(); i++)
        {

            while (!q.empty() && q.front() <= i - k)
            {
                q.pop_front();
            }

            while (!q.empty() && a[q.back()] <= a[i])
            {
                q.pop_back();
            }

            q.push_back(i);

            if (i >= k - 1)
            {
                ans.push_back(a[q.front()]);
            }
        }

        for(auto it : ans){
            cout << it << " ";
        }
        cout << "\n";
    }
}