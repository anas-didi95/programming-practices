#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int l = s.size();
    cout << (char)toupper(s[0]);
    for (int i = 1; i < l; i++)
        cout << s[i];
    cout << endl;

    return 0;
}
