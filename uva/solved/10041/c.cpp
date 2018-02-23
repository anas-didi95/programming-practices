#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int x[n];
        for (int i = 0; i < n; i++) scanf("%d", &x[i]);
        sort(x, x+n);
        
        int median = x[n/2];
        
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += abs(x[i]-median);
        }

        printf("%d\n", sum);
    }

    return 0;
}
