#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

void solve(int n) {
    for (int i = 0; i < n; i++) {
        int ws = n - i;
        for (int c = 0; c < ws; c++) {
            printf("  ");
        }
        for (int c = 0; c < i; c++) {
            printf("%d ", c);
        }
        //printf("%d ", i);
        printf((i==0?"%d":"%d "), i);
        for (int c = i-1; c >= 0; c--) {
            printf((c == 0?"%d":"%d "), c);
        }
        /*for (int c = ws-1; c >= 0; c--) {
            printf((c == 0?" ":"  "));
        }*/
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("%d ", n);
    for (int i = n-1; i >= 0; i--) {
        printf((i == 0?"%d":"%d "), i);
    }
    printf("\n");

    for (int i = n-1; i >= 0; i--) {
        int ws = n-i;
        for (int c = 0; c < ws; c++) {
            printf("  ");
        }
        for (int c = 0; c < i; c++) {
            printf("%d ", c);
        }
        //printf("%d ", i);
        printf((i==0?"%d":"%d "), i);
        for (int c = i-1; c >= 0; c--) {
            printf((c == 0?"%d":"%d "), c);
        }
        /*for (int c = ws-1; c >= 0; c--) {
            printf((c == 0?" ":"  "));
        }*/
        printf("\n");
    }
}

int main() {
    scanf("%d", &n);

    solve(n);

    return 0;
}
