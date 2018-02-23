#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

int main() {
    scanf("%d", &n);

    int c[n];
    for (int i = 0; i < n; i++) scanf("%d", &c[i]);

    int curr, ans = 0;
    bool r_1, r_2;
    for (int i = 1; i < n; i++) {
        curr = c[i];
        r_1 = false;
        r_2 = false;
        for (int j = 0; j < i; j++) {
            if (curr < c[j]) r_2 = true;
            else if (curr > c[j]) r_1 = true;
            else {
                r_1 = false;
                r_2 = false;
                break;
            }
        }
        if (r_1 ^ r_2) ans++;
    }

    printf("%d\n", ans);

    return 0;
}
