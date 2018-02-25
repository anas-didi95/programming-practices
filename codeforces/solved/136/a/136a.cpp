#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int main() {
    int n;
    cin >> n;

    int f[n], v;
    for (int i = 0; i < n; i++) {
        cin >> v;
        f[v-1] = i+1;
    }
    
    for (int i : f) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
