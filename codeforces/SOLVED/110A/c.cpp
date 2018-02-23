#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    int count = 0;
    while (n) {
        int r = n % 10;
        if (r == 4 || r == 7)
            count++;
        n /= 10;
    }
    
    cerr << count << endl;
    if (count) {
        bool lucky = true;
        while (count && lucky) {
            int r = count % 10;
            if (r != 4 && r != 7)
                lucky = false;
            count /= 10;
        }
        cout << (lucky ? "YES" : "NO") << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
