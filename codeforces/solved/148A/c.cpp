#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, l, m, n;
    cin >> k >> l >> m >> n;

    int d;
    cin >> d;
    bool drg[d+1] = {false};
    
    for (int i = k; i <= d; i+=k) 
        drg[i] = true;
    for (int i = l; i <= d; i+=l)
        drg[i] = true;
    for (int i = m; i <= d; i+=m)
        drg[i] = true;
    for (int i = n; i <= d; i+=n)
        drg[i] = true;

    int count = 0;
    for (int i = 1; i <= d; i++) {
        if (drg[i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
