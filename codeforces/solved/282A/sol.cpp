#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int total = 0;
        while (n--) {
            string s;
            cin >> s;
            bool f = false;
            for (char c : s) {
                switch (c) {
                    case '+':
                        total++; f = true; break;
                    case '-':
                        total--; f = true; break;
                }
                if (f) break;
            }
        }
        cout << total << endl;
    }

    return 0;
}
