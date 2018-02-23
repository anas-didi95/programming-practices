#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    scanf("%lld", &t);

    while (t--) {
        ll n, p;
        scanf("%lld %lld", &n, &p);

        ll cw = p/2;
        ll hd = p/10;

        ll ctcw = 0, cthd = 0;
        for (ll i = 0; i < n; i++) {
            ll n;
            scanf("%lld", &n);
            if (n <= hd) cthd++;
            else if (n >= cw) ctcw++;
        }
        
        if (cthd == 2 && ctcw == 1)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
