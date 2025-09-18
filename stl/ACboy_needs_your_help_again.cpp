#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;  
        deque<int> q;

        for (int i = 0; i < n; i++) {
            string cmd;
            int val;
            cin >> cmd >> val;

            if (cmd == "IN") {
                q.push_back(val); 
            } else if (cmd == "OUT") {
                if (!q.empty()) {
                    if (s == "FIFO") {
                        cout << q.front() << "\n"; 
                        q.pop_front();
                    } else { 
                        cout << q.back() << "\n";  
                        q.pop_back();
                    }
                } else {
                    cout << "None\n"; 
                }
            }
        }
    }

    return 0;
}
