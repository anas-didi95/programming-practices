#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    while (cin >> t) {
        int s[3];
        for (int i = 0; i < t; i++) {
            cin >> s[0] >> s[1] >> s[2];
            sort(s, s+3);
            printf("Case %d: %d\n", i+1, s[1]);
        }
    }

    return 0;
}
