#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

int main() {
    int n; cin >> n;

    int v[n];
    for (int i = 0; i < n; i++) cin >> v[i];
    
    int even = 0;
    for (int i = 0; i < 3; i++) {
        if (v[i] % 2 == 0) even++;
    }
    //dbg("even",even);

    if (even >= 2) {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 != 0) {
                cout << (i+1) << endl;
                break;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                cout << (i+1) << endl;
                break;
            }
        }
    }

    return 0;
}
