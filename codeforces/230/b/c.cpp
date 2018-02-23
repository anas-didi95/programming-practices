#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long int ll;

const ll P = 1000100;
bool primes[P];

void seive() {
    memset(primes, true, sizeof(primes));
    primes[0] = false;
    primes[1] = false;
    for (ll i = 2; i < P; i++) {
        if (primes[i]) {
            for (ll j = i*i; j < P; j+=i) primes[j] = false;
        }
    }
}

int main() {
    seive();

    ll n, x; cin >> n;
    while (n--) {
        cin >> x;
        ll sq = sqrt(x);
        printf("%s\n", (primes[sq] && sq*sq == x ? "YES" : "NO"));
    }
    
    return 0;
}
