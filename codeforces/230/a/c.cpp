#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

struct dragon {
    int s;
    int b;
};

int s, n;

bool order(dragon a, dragon b) {
    if (a.s == b.s) {
        return a.b > b.b;
    } else {
        return a.s < b.s;
    }
}

bool solve(dragon d[], int s, int n) {
    sort(d, d+n, order);

    /*for (int i = 0; i < n; i++) {
        dbg(i); dbg(d[i].s); dbg(d[i].b); dbgl;
    }*/

    int c = 0;

    for (int i = 0; i < n; i++) {
        if (s <= d[i].s) {
            break;
        } else {
            s += d[i].b;
            c++;
        }
    }

    return (c==n);
}

int main() {
    scanf("%d %d", &s, &n);

    dragon d[n];
    int x, y;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &d[i].s, &d[i].b);
    }

    printf("%s\n", (solve(d, s, n)?"YES":"NO"));

    return 0;
}
