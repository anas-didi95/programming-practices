#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n, b, h, w;
int p, a;

int main() {
    while (scanf("%d %d %d %d", &n, &b, &h, &w)==4) {
        int ans = INT_MAX;
        for (int i = 0; i < h; i++) {
            scanf("%d", &p);
            int t = n*p;
            for (int j = 0; j < w; j++) {
                scanf("%d", &a);
                if (a >= n) {
                    if (t <= b) ans = min(ans, t); 
                }
            }
        }

        if (ans != INT_MAX) printf("%d\n", ans);
        else printf("stay home\n");
    }

    return 0;
}
