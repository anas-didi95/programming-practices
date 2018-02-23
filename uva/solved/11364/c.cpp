#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        sort(p, p+n);
        int total = 0;
        for (int i = 0; i < n-1; i++) {
            total += (p[i+1]-p[i]);
        }
        cout << total*2 << endl;
    }

    return 0;
}
