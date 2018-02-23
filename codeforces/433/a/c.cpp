#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<endl
#define dbgl cerr<<endl

int n;
int a[3];

int main() {
    scanf("%d", &n);
    
    int x, s = 0;
    a[1] = 0;
    a[2] = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        x /= 100;
        a[x]++;
        s += x;
    }

    bool f = (n!=1 && s%2==0);

    if (f) {
        int h = s/2;
        f = (a[2]==0);
        for (int i = 1; i <= a[2] && !f; i++) {
            int b = 2*i;
            if (b <= h && h-b <= a[1]) f = true;
        }
    }
    
    printf("%s\n", (f?"YES":"NO"));

    return 0;
}
