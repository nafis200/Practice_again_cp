#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    while (cin >> n && n != 0) {
        vector<int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];

        stack<int> st; // stack to store indices
        int maxArea = 0;
        int i = 0;

        while (i < n) {
            if (st.empty() || h[i] >= h[st.top()]) {
                st.push(i);
                i++;
            } else {
                int tp = st.top(); st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                int area = h[tp] * width;
                maxArea = max(maxArea, area);
            }
        }

        // Remaining bars in stack
        while (!st.empty()) {
            int tp = st.top(); st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            int area = h[tp] * width;
            maxArea = max(maxArea, area);
        }

        cout << maxArea << "\n";
    }
}
