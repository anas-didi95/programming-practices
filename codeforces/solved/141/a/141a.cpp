#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

typedef map<char, int> mci;
typedef map<char, int>::iterator mcii;

int main() {
    string g, h, a;
    cin >> g >> h >> a;
    
    if (g.size()+h.size() != a.size()) {
        cout << "NO" << endl;
        return 0;
    }

    mci m;
    for (char c : g) m[c]++;
    for (char c : h) m[c]++;
    for (char c : a) m[c]--;
    for (mcii it = m.begin(); it != m.end(); it++) {
        if (it->second != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
