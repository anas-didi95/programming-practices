#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

typedef long long ll;

int main() {
    ll n;
    set<ll> s;
    
    int i = 4;
    while (i--) {
        cin >> n;
        s.insert(n);
    }

    cout << 4-s.size() << endl;

    return 0;
}
