#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n, m;

int solve(int n, int m) {
    int i = 1;
    while (m >= i) {
        m -= i;
        i++;
        if (i > n) i %= n;
    }
    return m;
}

int main() {
    scanf("%d %d", &n, &m);

    printf("%d\n", solve(n, m));
    
    return 0;
}
