#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int flag = 0;
    int l = s.size();
    for (int i = 0; i < l; i++) {
        if (flag == 0) {
            if (s[i] == 'h') flag++;
        }
        else if (flag == 1) {
            if (s[i] == 'e') flag++;
        }
        else if (flag == 2 || flag == 3) {
            if (s[i] == 'l') flag++;
        }
        else if (flag == 4) {
            if (s[i] == 'o') flag++;
        }
    }

    cout << (flag == 5 ? "YES" : "NO") << endl;

    return 0;
}
