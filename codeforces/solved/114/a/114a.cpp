#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<< ' '
#define dbgl cerr<<endl

typedef long double ld;

int main() {
    ld k, l;

    cin >> k >> l;
    
    int d = 0;
    while (l >= k) {
        l /= k;
        dbg("l"); dbg(l); dbgl;
        d++;
        if (l == 1) {
            cout << "YES" << endl;
            cout << d-1 << endl;
            return 0;
        } 
    }

    cout << "NO" << endl;

    return 0;
}
