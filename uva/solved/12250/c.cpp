#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, string> m;
    m["HELLO"] = "ENGLISH";
    m["HOLA"] = "SPANISH";
    m["HALLO"] = "GERMAN";
    m["BONJOUR"] = "FRENCH";
    m["CIAO"] = "ITALIAN";
    m["ZDRAVSTVUJTE"] = "RUSSIAN";
    
    string s;
    int t = 1;
    while(cin >> s) {
        if (s == "#") break;
        
        if (m.find(s) != m.end())
            printf("Case %d: %s\n", t++, m[s].c_str());
        else
            printf("Case %d: UNKNOWN\n", t++);
    }

    return 0;
}
