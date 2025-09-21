#include <bits/stdc++.h>
using namespace std;

const int MAXN = 25;
vector<int> world[MAXN];  
int pos[MAXN];             


void return_blocks_above(int a) {
    int p = pos[a];
    while (world[p].back() != a) {
        int top = world[p].back();
        world[p].pop_back();
        world[top].push_back(top); 
        pos[top] = top;
    }
}

void pile_blocks(int a, int b) {
    int pa = pos[a];
    int pb = pos[b];


    vector<int> pile;
    while (!world[pa].empty()) {
        int top = world[pa].back();
        pile.push_back(top);
        world[pa].pop_back();
        if (top == a) break;
    }
    reverse(pile.begin(), pile.end());

    for (int x : pile) {
        world[pb].push_back(x);
        pos[x] = pb;
    }
}

int main() {
    int n;
    cin >> n;

   
    for (int i = 0; i < n; i++) {
        world[i].push_back(i);
        pos[i] = i;
    }

    string cmd1, cmd2;
    int a, b;
    while (cin >> cmd1) {
        if (cmd1 == "quit") break;
        cin >> a >> cmd2 >> b;

        if (a == b || pos[a] == pos[b]) continue; 
        if (cmd1 == "move" && cmd2 == "onto") {
            return_blocks_above(a);
            return_blocks_above(b);
            world[pos[a]].pop_back();
            world[pos[b]].push_back(a);
            pos[a] = pos[b];
        }
        else if (cmd1 == "move" && cmd2 == "over") {
            return_blocks_above(a);
            world[pos[a]].pop_back();
            world[pos[b]].push_back(a);
            pos[a] = pos[b];
        }
        else if (cmd1 == "pile" && cmd2 == "onto") {
            return_blocks_above(b);
            pile_blocks(a, b);
        }
        else if (cmd1 == "pile" && cmd2 == "over") {
            pile_blocks(a, b);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i << ":";
        for (int block : world[i]) {
            cout << " " << block;
        }
        cout << "\n";
    }

    return 0;
}
