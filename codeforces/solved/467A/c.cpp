#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count = 0;
    while (n--) {
        int p, q;
        cin >> p >> q;
        int r = q-p;
        if (r >= 2) count++;
    }

    cout << count << endl;
}
