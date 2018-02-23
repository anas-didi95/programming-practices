#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

struct lp {
    int p, q;
};

int n;

bool rule(lp a, lp b) {
    if (a.p == b.p) return a.q < b.q;
    return a.p < b.p;
}

int main() {
    scanf("%d", &n);
    
    lp l[n];
    for (int i = 0; i < n; i++) {
       scanf("%d %d", &l[i].p, &l[i].q); 
    }

    sort(l, l+n, rule);
    
    bool happy = false;
    for (int i = 1; i < n && !happy; i++) {
        if (l[i-1].p < l[i].p && l[i-1].q > l[i].q)
            happy = true;
    }

    printf("%s Alex\n", (happy?"Happy":"Poor"));

    return 0;
}

