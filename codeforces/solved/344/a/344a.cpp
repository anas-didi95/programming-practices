#include <bits/stdc++.h>
using namespace std;

#define dbg(x, v) cerr<<x<<'='<<v<<endl

int main() {
    int n; cin >> n;

    string s = "", m;
    while (n-- > 0) {
        cin >> m;
        s += m;
    }

    int g = 1;
    for (int i = 1; i < s.size()-1; i++) {
        if (s[i] == s[i+1]) g++;
    }

    cout << g << endl;

    return 0;
}
