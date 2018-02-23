#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

map<char, int> m;
map<char, int>::iterator it;
string s;
int k;

int main() {
    cin >> k >> s;

    for (char c : s) {
        if (m.find(c) == m.end()) m[c] = 1;
        else m[c]++;
    }
    
    bool flag = true;
    string s1 = "";
    for (it = m.begin(); it != m.end() && flag; it++) {
        //dbg(it->first); dbg(it->second); dbgl;
        if (it->second % k != 0) flag = false;
        else s1.append(it->second/k, it->first);
    }

    if (flag) {
        while (k--) {
            printf("%s", s1.c_str());
        }
    }
    else printf("-1");
    printf("\n");

    return 0;
}
