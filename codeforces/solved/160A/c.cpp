#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int c[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        total += c[i];
    }
    sort(c, c+n);
    
    int i = n-1;
    int v = c[i];
    int count = 1;
    while (v <= total-v) {
        v += c[--i]; cerr << v << endl;
        count++;
    }

    cout << count << endl;

    return 0;
}
