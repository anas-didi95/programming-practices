#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

ll n;
vector<ll> vi;
//vector<ll>::iterator it;

int main() {
    while (scanf("%lld", &n)==1) {
        vi.push_back(n);

        int c = vi.size();
        for (int i = c-1; i >= 1; i--) {
            if (vi[i-1] <= vi[i]) break;
            ll tmp = vi[i-1];
            vi[i-1] = vi[i];
            vi[i] = tmp;
        }

        //for (ll i : vi) dbg(i); dbgl;

        if (c % 2 == 0) {
            ll v1 = vi[c/2];
            ll v2 = vi[c/2-1];
            printf("%lld\n", (v1+v2)/2);
        }
        else printf("%lld\n", vi[c/2]);
    }
    
    return 0;
}
