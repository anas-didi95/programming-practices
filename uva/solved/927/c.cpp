#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<< ' '
#define dbgl cerr<<endl

typedef long long ll;

ll c, j, d, k;

int main() {
    scanf("%lld", &c);

    while (c--) {
        scanf("%lld", &j);
        //dbg("j ="); dbg(j);

        ll n[j+1];
        for (int i = 0; i <= j; i++) scanf("%lld", &n[i]);
        //for (int i : n) dbg(i);

        scanf("%lld", &d);
        //dbg("d ="); dbg(d);

        scanf("%lld", &k);
        //dbg("k ="); dbg(k);

        ll a = 0;
        do {
            a++;
            k -= a*d;
            //dbg(k);
        } while (k > 0);
        
        ll v = 0;
        for (int i = 0; i <= j; i++) v += n[i]*pow(a, i);

        printf("%lld\n", v);
    }
    
    return 0;
}
