#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int t, n;

int main() {
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        
        int d = INT_MIN, x, v;
        scanf("%d", &v);
        for (int i = 1; i < n; i++) {
            scanf("%d", &x);
            d = max(d, v-x);
            if (x > v) {
                v = x;
            }
        }
        printf("%d\n", d);
    }

    return 0;
}
