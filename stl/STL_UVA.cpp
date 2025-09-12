#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> order;             
    unordered_map<int, int> freq;       
    unordered_set<int> seen;            

    int x;
    while (cin >> x && x!= 0) {   
        freq[x]++;       
        if (!seen.count(x)) {  
            order.push_back(x);
            seen.insert(x);
        }
    }

  
    for (int num : order) {
        cout << num << " " << freq[num] << "\n";
    }

    return 0;
}
