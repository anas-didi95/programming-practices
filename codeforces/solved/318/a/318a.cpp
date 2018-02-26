#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;

    ll v = (n%2==0?n/2:n/2+1);

    //dbg('v'); dbg(v); dbgl;

    cout << (k<=v ? 2*k-1 : 2*(k-v)) << endl;

    return 0;
}
