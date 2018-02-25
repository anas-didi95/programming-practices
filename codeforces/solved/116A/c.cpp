#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p = 0;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p = p-a+b; cerr << p << endl;
        max = p > max ? p : max;
    }

    cout << max << endl;

    return 0;
}
