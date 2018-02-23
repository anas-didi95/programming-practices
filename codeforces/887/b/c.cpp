#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

string s;
int n;
int memo[5010][3];
int l;

int dp(int idx, int part) {
    if (idx == l || part > 3) return 0;
    else if (memo[idx][part] != -1) return memo[idx][part];
    
    int v = 0;
    if (part == 0 || part == 2)
        v = max(dp(idx, part+1), dp(idx, part+1)+(s[idx]=='a'));
    else if (part == 1)
        v = max(dp(idx, part+1), dp(idx, part+1)+(s[idx]=='b'));

    return v = max(v, dp(idx+1, part));
}

int main() {
    cin >> s;

    memset(memo, -1, sizeof(memo));

    l = s.size();

    printf("%d\n", dp(0, 0));
        
    return 0;
}
