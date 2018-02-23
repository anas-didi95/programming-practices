#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

ll n, m;

ll bs(ll l, ll r, ll k) {
    //dbg("k = "); dbg(k);
    if (l >= r) return k;

    k = (l+r)/2;
    //dbg("k = "); dbg(k); dbgl;
    ll v = k*(k+1)/2;
    //dbg("v = "); dbg(v); dbgl;
    if (v >= n-m) return bs(l, k, k);
    else return bs(k+1, r, k+1);
}

int main() {
    cin >> n >> m;
    
    if (m >= n) cout << n << endl;
    else cout << bs(0, 2e9, 0)+m << endl;

    return 0;
}
