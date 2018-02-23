#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

ll n, m;

ll dist(ll a, ll b) {
    if (a <= b) return b-a;
    else return n-a+b;
}

int main() {
    cin >> n >> m;
    
    ll x, p = 1, c = 0;
    for (ll i = 0; i < m; i++) {
        cin >> x;
        c += dist(p, x);
        p = x;
    }
    
    cout << c << endl;

    return 0;
}
