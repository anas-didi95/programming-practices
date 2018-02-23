#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

int main() {
    scanf("%d", &n);

    int t = n*n;
    
    int j = 1, l;
    for (int i = 1; i <= n; i++) {
        l = i*n/2;
        for (; j <= l; j++) {
            printf("%d %d", j, t-j+1);
            if (j != l) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
