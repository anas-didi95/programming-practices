#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, m, t, l, r;

int main() {
    cin >> n;

    ll a[n+1] = {0}, b[n+1] = {0}, x;
    for (ll i = 1; i <= n; i++) {
        cin >> x;
        a[i] = x;
        b[i] = x;
    }
    sort(b, b+n+1);

    for (ll i = 1; i < n+1; i++) {
        a[i] = a[i]+a[i-1];
        b[i] = b[i]+b[i-1];
    }

    cin >> m;

    while (m--) {
        scanf("%lld %lld %lld", &t, &l, &r);
        printf("%lld\n", (t==1?a[r]-a[l-1]:b[r]-b[l-1]));
    }

    return 0;
}
