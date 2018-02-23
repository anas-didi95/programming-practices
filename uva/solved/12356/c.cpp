#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int s, b;
int l, r;

int main() {
    
    while (scanf("%d %d", &s, &b)==2) {
        if (s == 0 && b == 0) break;

        int sl[s+1]; 
        int sr[s+1];
        for (int i = 1; i <= s; i++) {
            sr[i] = i+1;
            sl[i] = i-1;
        }
        sl[1] = -1;
        sr[s] = -1;
        
        while (b--) {
            scanf("%d %d", &l, &r);

            if (sl[l] == -1) printf("* ");
            else printf("%d ", sl[l]);
            if (sr[r] == -1) printf("*\n");
            else printf("%d\n", sr[r]);
            sl[sr[r]] = sl[l];
            sr[sl[l]] = sr[r];
        }

        printf("-\n");
    }

    return 0;
}
