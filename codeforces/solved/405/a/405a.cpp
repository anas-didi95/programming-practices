#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

int main() {
    int n; cin >> n;

    int b[n];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(b, b+n);
    
    for (int i = 0; i < n-1; i++) cout << b[i] << ' ';
    cout << b[n-1] << endl;

    return 0;
}
