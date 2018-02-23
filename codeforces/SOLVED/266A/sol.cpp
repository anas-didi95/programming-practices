#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        string s;
        cin >> s;
        
        char c = s[0];
        int count = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == c) count++;
            else c = s[i];
        }

        cout << count << endl;
    }

    return 0;
}

