#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

string s;

string sum(string s) {
    int n = 0;

    for (char c : s) {
        n += (c-'0');
    }

    return to_string(n);
}

int main() {
    cin >> s;

    int c = 0;
    while ((int)s.size() != 1) {
        s = sum(s);
        c++;
    }

    printf("%d\n", c);

    return 0;
}
