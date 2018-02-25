#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

vector<ll> v;

ll l, r;

void lucky(ll digit, ll val) {
    if (digit > 10) return;

    v.push_back(val);
    lucky(digit+1, val*10+4);
    lucky(digit+1, val*10+7);
}

int main() {
    lucky(0, 0);
    sort(v.begin(), v.end());

    cin >> l >> r;
    
    ll sum = 0, s = v.size();
    for (ll i = 1; i < s; i++) {
        if (v[i] >= l && v[i] <= r) {
            sum += (v[i]-l+1)*v[i];
            l = v[i]+1;
        }
        else if (v[i] >= l && v[i] > r) {
            sum += (r-l+1)*v[i];
            break;
        }
    }

    cout << sum << endl;

    return 0;
}
