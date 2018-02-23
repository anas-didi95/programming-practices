#include <bits/stdc++.h>
using namespace std;

map<char, int> tbl;

int main() {
    int n; cin >> n;

    while (n--) {
        tbl.clear();
        int k; cin >> k;
        char c; int v;
        while (k--) {
           cin >> c >> v;
           tbl[c] = v;
        }
        int m; cin >> m;
        double total = 0; string s;
        cin.ignore();
        for (int i = 0; i < m; i++) {
            getline(cin, s);
            for (char c : s) {
                if (tbl.find(c) != tbl.end())
                    total += tbl[c];
            }
        }
        
        total /= 100;
        printf("%.2f$\n", total);
    }

    return 0;
}

