#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q1, q2;

    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        int y;
        cin >> y;
        q1.push(y);
    }

    int x1;
    cin >> x1;
    for (int i = 0; i < x1; i++) {
        int y;
        cin >> y;
        q2.push(y);
    }

    set<pair<queue<int>, queue<int>>> st;
    int steps = 0;

    while (!q1.empty() && !q2.empty()) {
        steps++;
        if (st.count({q1, q2})) {
            cout << -1 << "\n";
            return 0;
        }
        st.insert({q1, q2});

        int p1 = q1.front();
        int p2 = q2.front();
        q1.pop();
        q2.pop();

        if (p1 > p2) {
            q1.push(p2);
            q1.push(p1);
        } else {
            q2.push(p1);
            q2.push(p2);
        }
    }

    if (q1.empty()) {
        cout << steps << " 2" << "\n";
    } else {
        cout << steps << " 1" << "\n";
    }

    return 0;
}