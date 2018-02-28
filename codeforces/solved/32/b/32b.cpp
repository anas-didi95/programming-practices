#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

int main() {
    string s;
    cin >> s;

    int l = s.size();
    int i = 0;
    while (i < l) {
        switch(s[i]) {
            case '.':
                cout << '0';
                i++;
                break;
            case '-':
                if (s[i+1]=='.') cout << '1';
                else cout << '2';
                i+=2;
                break;
        }
    }
    cout << endl;

    return 0;
}
