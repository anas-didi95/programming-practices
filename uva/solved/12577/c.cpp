#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, string> m;
    m["Hajj"] = "Hajj-e-Akbar";
    m["Umrah"] = "Hajj-e-Asghar";

    string s;
    int t = 1;
    while (cin >> s) {
        if (s == "*") break;

        printf("Case %d: %s\n", t++, m[s].c_str()); 
    }
    
    return 0;
}
