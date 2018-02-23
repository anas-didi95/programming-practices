#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

void solve(int n) {
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    if (n%2 != 0) {
        if (a[0]%2!=0 && a[n-1]%2!=0) printf("Yes");
        else printf("No");
    }
    else printf("No");
    printf("\n");
}

int main() {
    scanf("%d", &n);

    solve(n);

    return 0;
}
