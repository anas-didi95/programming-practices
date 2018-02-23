#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

string s;

int main() {
    cin >> s;
    regex pattern("WUB");

    s = regex_replace(s, pattern, "1");
    dbg("s"); dbg(s); dbgl;
    
    int l = s.size();
    bool space = false;
    string s1 = "";
    for (int i = 0; i < l; i++) {
        if (s[i] == '1' && !s1.empty()) {
            if (space) printf(" ");
            else space = true;
            printf("%s", s1.c_str());
            s1 = "";
        }
        else if (s[i] != '1') {
            s1 += s[i];
        }
    }
    if (!s1.empty()) {
        printf((space?" %s":"%s"), s1.c_str());
    }
    printf("\n");

    return 0;
}
