#include <bits/stdc++.h>
using namespace std;

map<char, bool> used;

int main() {
    for (char c = 'a'; c <= 'z'; c++)
        used[c] = false;

    string s;
    cin >> s;

    int l = s.size();
    int c = 0;
    for (int i = 0; i < l; i++) {
        if (!used[s[i]]) {
            used[s[i]] = true;
            c++;
        }
    }

    if (c % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
