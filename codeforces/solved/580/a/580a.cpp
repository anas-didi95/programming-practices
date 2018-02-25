#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    ll max = 0, prev = a[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] >= prev) count++;
        else {
            max = (max > count ? max : count);
            count = 1;
        }
        prev = a[i];
    }
    max = (max > count ? max : count);

    cout << max << endl;

    return 0;
}
