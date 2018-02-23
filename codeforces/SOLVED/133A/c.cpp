#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int l = s.size();
    bool flag = false;
    for (int i = 0; i < l && !flag; i++) {
        switch (s[i]) {
            case 'H':
            case 'Q':
            case '9':
                flag = true;
        }
    }
    
    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}
