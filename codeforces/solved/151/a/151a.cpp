#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a = (k*l)/nl;
    int b = c*d;
    int z = p/np;

    int m = a;
    m = (m<b?m:b);
    m = (m<z?m:z);

    cout << m/n << endl;

    return 0;
}
