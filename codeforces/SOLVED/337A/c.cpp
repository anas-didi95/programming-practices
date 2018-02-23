#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int pzl[m];
    for (int i = 0; i < m; i++) {
        cin >> pzl[i];
    }

    sort(pzl, pzl+m);
    int ans = INT_MAX;
    cerr << m-n << endl;
    for (int i = 0; i <= m-n; i++) {
        ans = min(ans, pzl[i+n-1]-pzl[i]);
    }
    cout << ans << endl;

    return 0;
}
