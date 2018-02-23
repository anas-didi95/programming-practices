#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

string s;

int main() {
    while (cin >> s) {
        for (char c : s) cout << char(c-7);
        cout << endl;
    }

    return 0;
}
