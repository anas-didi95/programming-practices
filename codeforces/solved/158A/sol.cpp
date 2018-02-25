#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    while (cin >> n >> k) {
        int a[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int s = a[k];
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] > 0 && a[i] >= s) count++;
        }

        cout << count << endl;
    }

    return 0;
}
