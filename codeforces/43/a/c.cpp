#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;
map<string, int> m;
map<string, int>::iterator it;

int main() {
    scanf("%d", &n);
    
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        m[s]++;
    }
    
    int goal = INT_MIN;
    string ans;
    for (it = m.begin(); it != m.end(); it++) {
        if (it->second > goal) {
            ans = it->first;
            goal = it->second;
        }
    }

    printf("%s\n", ans.c_str());

    return 0;
}
