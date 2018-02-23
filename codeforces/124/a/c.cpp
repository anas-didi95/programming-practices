#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int a, b, n;

int solve(int a, int b, int n) {
    int v1 = a+1;
    int v2 = n-b;
    int v = (v1>v2?v1:v2);

    return n-v+1;
}

int main() {
    scanf("%d %d %d", &n, &a, &b);

    printf("%d\n", solve(a, b, n));

    return 0;
}
