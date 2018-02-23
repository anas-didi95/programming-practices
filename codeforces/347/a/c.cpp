#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    sort(a, a+n);

    printf("%d", a[n-1]);
    for (int i = 1; i < n-1; i++) printf(" %d", a[i]);
    printf(" %d\n", a[0]);

    return 0;
}
