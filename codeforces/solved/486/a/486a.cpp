#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    cout << (n%2==0?n/2:-1*(n/2+1)) << endl;

    return 0;
}
