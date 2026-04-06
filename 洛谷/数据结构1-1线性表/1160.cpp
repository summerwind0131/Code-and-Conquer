#include<iostream>
using namespace std;
struct Node {
    int left, right;
    bool removed;
} nodes[100005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    nodes[0].right = 1;
    nodes[1].left = 0;
    nodes[1].right = 0;

    for (int i = 2; i <= n; i++) {
        int k, p;
        cin >> k >> p;
        if (p == 0) {
            nodes[i].right = k;
            nodes[i].left = nodes[k].left;
            nodes[nodes[k].left].right = i;
            nodes[k].left = i;
        } else {
            nodes[i].left = k;
            nodes[i].right = nodes[k].right;
            if (nodes[k].right != 0) {
                nodes[nodes[k].right].left = i;
            }
            nodes[k].right = i;
        }
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (!nodes[x].removed) {
            nodes[x].removed = true;
            nodes[nodes[x].left].right = nodes[x].right;
            if (nodes[x].right != 0) {
                nodes[nodes[x].right].left = nodes[x].left;
            }
        }
    }

    int curr = nodes[0].right;
    bool first = true;
    while (curr != 0) {
        if (!first) cout << " ";
        cout << curr;
        first = false;
        curr = nodes[curr].right;
    }
    cout << "\n";
    return 0;
}