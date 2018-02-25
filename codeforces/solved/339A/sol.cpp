#include <bits/stdc++.h>
using namespace std;

map<char, int> m;

int main() {
    string s;

    while (cin >> s) {
        m.clear();
        int l = s.size();
        for (int i = 0; i < s.size(); i++)
            m[s[i]]++;

        for (int i = 0; i < l; i++) {
            if (m['1'] != 0) {
                cout << '1';
                m['1']--;
            }
            else if (m['2'] != 0) {
                cout << '2';
                m['2']--;
            }
            else if (m['3'] != 0) {
                cout << '3';
                m['3']--;
            }

            if (m['+'] != 0) {
                cout << '+';
                m['+']--;
            }
        }
        cout << endl;
    }

    return 0;
}
