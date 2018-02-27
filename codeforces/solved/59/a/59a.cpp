#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

int main() {
    string s; cin >> s;
    
    int upper = 0, lower = 0;
    for (char c : s) {
        if (isupper(c)) upper++;
        else lower++;
    }
    
    if (upper == lower) {
        for (char c : s) cout << char(tolower(c));
    }
    else {
        if (upper > lower)
            for (char c : s) cout << char(toupper(c));
        else 
            for (char c : s) cout << char(tolower(c));
    }
    cout << endl;

    return 0;
}
