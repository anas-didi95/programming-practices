#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

int main() {
    scanf("%d", &n);

    int b[n], t = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
        t += b[i];
    }
    
    int w = 0;
    for (int i = 0; i < n; i++) {
        if ((t-b[i])%2 == 0) w++;
    }

    printf("%d\n", w);

    return 0;
}
