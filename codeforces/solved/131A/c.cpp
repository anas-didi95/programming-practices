#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool flag = true;
    int l = s.size();
    for (int i = 1; i < l && flag; i++) {
        if (s[i] != (char)toupper(s[i]))
                flag = false;
    }

    if (flag) {
        if (s[0] == (char)tolower(s[0]))
            cout << (char)toupper(s[0]);
        else
            cout << (char)tolower(s[0]);
        for (int i = 1; i < l; i++) {
            cout << (char)tolower(s[i]);
        }
    }
    else
        cout << s;
    cout << endl;

    return 0;
}
