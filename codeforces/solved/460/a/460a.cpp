#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

int main() {
    int n, m; cin >> n >> m;

    int sock = n, day = 1;
    while (sock > 0) {
        if (day++ % m == 0) continue;
        sock--;
    }

    cout << (day-1) << endl;

    return 0;
}
