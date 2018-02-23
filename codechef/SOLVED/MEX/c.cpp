#include <bits/stdc++.h>
using namespace std;

#define MAX 2*100100

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        bool s[MAX] = {false};
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            s[x] = true;
        }
        
        for (int i = 0; i < MAX && k; i++) {
            if (!s[i]) {
                s[i] = true;
                k--;
            }
        }

        for (int i = 0; i < MAX; i++) {
            if (!s[i]) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
