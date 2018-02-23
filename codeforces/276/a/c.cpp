#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n, k;

int main() {
    scanf("%d %d", &n, &k);
    
    int ans, f, t, v;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &f, &t);
        v = (t > k ? f-(t-k) : f);
        if (i == 0) ans = v;
        else ans = max(v, ans);
    }

    printf("%d\n", ans);

    return 0;
}
