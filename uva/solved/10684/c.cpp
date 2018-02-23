#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

int main() {
    while (scanf("%d", &n)==1) {
        if (n == 0) break;
        
        long long ans = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            scanf("%lld", &x);
            sum += x;
            if (sum < 0) sum = 0;
            ans = max(sum, ans);
        }

        if (ans == 0) printf("Losing streak.\n");
        else printf("The maximum winning streak is %lld.\n", ans);
    }

    return 0;
}
