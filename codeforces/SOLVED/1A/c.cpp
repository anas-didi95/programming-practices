#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    double n, m, a;
    cin >> n >> m >> a;

    cout << ll(ceil(m/a) * ceil(n/a)) << endl;

    return 0;
}
