#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n, m;
int a[110];

int solve(int n, int m) {
    sort(a, a+n);
    
    int i = 0, v = 0;
    while (m && i < n && a[i] < 0) {
        v += abs(a[i]);
        m--;
        i++;
    }

    return v;
}

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d\n", solve(n, m));

    return 0;
}
