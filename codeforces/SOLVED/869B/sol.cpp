#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll a, b;

    while (cin >> a >> b) {
        long r = 1;
        ll c = 1;
        for (ll i = a+1; i <= b; i++) {
            if (r == 0) break;
            c = (c%10*i)%10;
            cerr << r << endl;
            r = c % 10;
        }

        cout << r << endl;
    }

    return 0;
}

