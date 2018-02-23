#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

string s;

int main() {
    while (cin >> s) {
        if (s == "#") break;

        printf("%s\n", 
                next_permutation(s.begin(), s.end())?s.c_str():"No Successor");
    }

    return 0;
}
