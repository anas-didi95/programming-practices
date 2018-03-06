#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

typedef long long ll;

int main() {
    ll n; cin >> n;
    
    ll o_l = 0, o_r = 0, l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        o_l += l; o_r += r;
    }

    ll c_l = n-o_l;
    ll c_r = n-o_r;

    cout << (c_l<o_l?c_l:o_l)+(c_r<o_r?c_r:o_r) << endl;

    return 0;
}

