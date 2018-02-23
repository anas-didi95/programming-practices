#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n, x, y;

int solve(int n, int x, int y) {
    int t = ceil((double)y*n/100);
    //dbg("t ="); dbg(t); dbgl;

    if (x >= t) return 0;
    else return t-x;
}

int main() {
    scanf("%d %d %d", &n, &x, &y);

    printf("%d\n", solve(n, x, y));

    return 0;
}
