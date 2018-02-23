#include <bits/stdc++.h>
using namespace std;

int n;
int h[110];

int main() {
    int t = 1;
    while (scanf("%d", &n)==1) {
        if (n == 0) break;

        int total = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &h[i]);
            total += h[i];
        }

        int d = total/n;
        int ans = 0;
        for (int i = 0; i < n; i++) 
            ans += (h[i]-d < 0 ? 0 : h[i]-d);

        printf("Set #%d\n", t++);
        printf("The minimum number of moves is %d.\n\n", ans);
    }

    return 0;
}
