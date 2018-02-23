#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        string s;
        cin >> s;

        if (s.size() == 5) {
            printf("3\n");
        }
        else {
            int one = 0, two = 0;
            if (s[0] == 'o') one++;
            else if (s[0] == 't') two++;

            if (s[1] == 'n') one++;
            else if (s[1] == 'w') two++;

            if (s[2] == 'e') one++;
            else if (s[2] == 'o') two++;

            if (one >= 2) printf("1\n");
            else if (two >= 2) printf("2\n");
        }
    }

    return 0;
}
