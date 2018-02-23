#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll h[n];
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        
        ll min = INT_MAX;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                ll res = abs(h[i]-h[j]);
                min = res < min ? res : min;
            }
        }

        cout << min << endl;
    }

    return 0;
}

