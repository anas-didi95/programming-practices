#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int main() {
    int n;
    cin >> n;

    bool g[n+1] = {false};
    g[0] = true;
    int v;

    int p; cin >> p;
    while (p-- > 0) {
        cin >> v;
        g[v] = true;
    }

    int q; cin >> q;
    while (q-- > 0) {
        cin >> v;
        g[v] = true;
    }

    for (bool b : g) {
        if (!b) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;

    return 0;
}
