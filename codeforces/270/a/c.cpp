#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int t, a;

void solve(int a) {
    int v = 360, d = 180-a;
    
    while (v > 0) {
        v -= d;
        //dbg("v ="); dbg(v); dbgl;
    }
    
    printf("%s\n", (v==0?"YES":"NO"));
}

int main() {
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &a);
        solve(a);
    }

    return 0;
}
