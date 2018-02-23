#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

typedef long long ll;

ll solve(ll n) {
    ll c = 0;
    while (n != 1) {
        c++;
        if (n % 2 == 1) n = 3*n+1;
        else n = n/2;
    }
    c++;
    return c;
}

int main() {
    ll a, b;
    
    while (cin >> a >> b) {
        ll max = -1;
        ll beg = a < b ? a : b;
        ll end = a > b ? a : b;
        for (ll i = beg; i <= end; i++) {
            ll cur = solve(i);
            max = cur > max ? cur : max;
        }
        printf("%lld %lld %lld\n", a, b, max);
    }

    return 0;
}

