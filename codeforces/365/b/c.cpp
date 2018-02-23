#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<endl
#define dbgl cerr<<endl

int n;
int m[100010];
int maxlen, curlen;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }
    
    maxlen = curlen = (n >= 2 ? 2 : n);

    for (int i = 2; i < n; i++) {
        if (m[i] == m[i-1]+m[i-2]) curlen++;
        else {
            if (curlen > maxlen) maxlen = curlen;
            curlen = 2;
        }
    }

    if (curlen > maxlen) maxlen = curlen;

    printf("%d\n", maxlen);

    return 0;
}
