#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;
int a[100010];

int solve() {
    int t = INT_MAX, tt = 0, p;

    for (int i = 0; i < n; i++) {
        if (a[i] <= t) {
            //dbg(a[i]); dbg(t); dbgl;
            if (a[i] == t) tt++;
            else {
                t = a[i];
                p = i;
                tt = 1;
            }
        }
    }
    //dbg("tt"); dbg(tt); dbgl;

    if (tt > 1) return -1;
    else return p+1;
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int r = solve();
    if (r == -1) printf("Still Rozdil");
    else printf("%d", r);
    printf("\n");

    return 0;
}
