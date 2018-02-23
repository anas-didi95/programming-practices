#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

string t;
string name[] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};

int main() {
    cin >> t;
    
    int ans = 0;
    for (string s : name) {
        int i = -1;
        do {
            i = t.find(s, i+1);
            if (i != string::npos) ans++;
        } while (i != string::npos);
    }

    printf("%s\n", (ans==1?"YES":"NO"));

    return 0;
}
