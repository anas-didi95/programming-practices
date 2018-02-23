#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int t, n;

int main() {
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);

        int x;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            ans = max(ans, x);
        }

        printf("Case %d: %d\n", i+1, ans);
    }

    return 0;
}
