#include <bits/stdc++.h>
using namespace std;

const int M = 2010;
int n, m;

int main() {
    scanf("%d %d", &n, &m);
    
    int v[n+1];
    for (int i = 1; i <= n; i++) scanf("%d", &v[i]);
    
    int x, y, ans = 0;
    while (m--) {
       scanf("%d %d", &x, &y);
       ans += min(v[x], v[y]);
    }

    printf("%d\n", ans);

    return 0;
}
