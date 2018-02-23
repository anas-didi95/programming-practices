#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

string s;

int main() {
    cin >> s;

    regex pattern("144|14|1");

    s = regex_replace(s, pattern, "");
    //dbg("s"); dbg(s); dbgl;

    printf("%s", (s.empty()?"YES":"NO"));

    return 0;
}
