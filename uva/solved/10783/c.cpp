#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int t, a, b;

int main() {
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        int total = 0;
        for (int n = a; n <= b; n++) {
            if (n % 2 == 1) total += n;
        }
        printf("Case %d: %d\n", (i+1), total);
    }

    return 0;
}
