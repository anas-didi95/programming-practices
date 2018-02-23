#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (cin >> s) {
        int l = s.size();
        for (int i = 0; i < l; i++)
            s[i] = tolower(s[i]);
       
        string a = "";
        for (int i = 0; i < l; i++) {
            switch (s[i]) {
                case 'a':
                case 'o':
                case 'y':
                case 'e':
                case 'u':
                case 'i':
                    continue;
                default:
                    a += ".";
                    a += s[i];
            }
        }

        cout << a << endl;
    }

    return 0;
}
