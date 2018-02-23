#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<endl

int n, k;

void solve(int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) printf("%d", k);
            else printf("0");
            if (j != n-1) printf(" ");
        }
        printf("\n");
    }
}

int main() {
    scanf("%d %d", &n, &k);

    solve(n, k);

    return 0;
}
