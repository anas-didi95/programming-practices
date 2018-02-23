#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n, k;

void solve(int n, int k) {
    int m = n-k+1;

    for (int i = n; i >= m; i--) {
        printf("%d ", i);
    }

    for (int i = 1; i <= n-k; i++) {
        printf((i==n-k?"%d":"%d "), i);
    }
    printf("\n");
}

int main() {
    scanf("%d %d", &n, &k);

    solve(n, k);

    return 0;
}

