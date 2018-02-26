#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int dm[] = {5, 4, 3, 2, 1};

int dfs(int x, int m) {
    if (x == 0) return m;

    for (int i : dm) {
        if (x-i>=0) return dfs(x-i, m+1);
    }
}

int main() {
    int x;
    cin >> x;

    cout << dfs(x, 0) << endl;

    return 0;
}
