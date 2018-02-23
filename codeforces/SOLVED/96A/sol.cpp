#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    
    while (cin >> s) {
        int l = s.size();
        bool d = false;
        int p = 1;
        char c = s[0];
        for (int i = 1; i < l && !d; i++) {
            if (s[i] == c) p++;
            else {
                p = 1;
                c = s[i];
            }

            if (p >= 7) d = true;
        }

        cout << (d ? "YES" : "NO") << endl;
    }

    return 0;
}
