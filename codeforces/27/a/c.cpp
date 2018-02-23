#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

bool used[3010];
int n;

int main() {
    scanf("%d", &n);
    
    int x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        used[x] = true;
    }

    for (int i = 1; i < 3010; i++) {
        if (!used[i]) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
