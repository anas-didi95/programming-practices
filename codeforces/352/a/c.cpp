#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

void solve(int n) {
    int c5 = 0, c0 = 0;
    
    int x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == 0) {
            c0++;
        } else if (x == 5) {
            c5++;
        }
    }

    while ((c5*5)%9 != 0) {
        c5--;
    }

    if (c0 > 0) {
        if (c5 > 0) {
            for (int i = 0; i < c5; i++) {
                printf("5");
            }
            for (int i = 0; i < c0; i++) {
                printf("0");
            }
        } else {
            printf("0");
        }
    } else {
        printf("-1");
    }
    printf("\n");
}

int main() {
    scanf("%d", &n);

    solve(n);

    return 0;
}
