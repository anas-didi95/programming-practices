#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

string s, rs;

bool solve(string s, string rs) {
    reverse(s.begin(), s.end());

    if (s == rs) return true;
    else return false;
}

int main() {
    cin >> s >> rs;

    printf("%s\n", (solve(s, rs)?"YES":"NO"));

    return 0;
}
