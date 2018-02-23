#include <bits/stdc++.h>
using namespace std;

#define dg(x) cerr << x << " "
#define dgl cerr << endl

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        
        int sum = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[j] <= a[i]) sum++; 
            } 
        }

        printf("%d\n", sum);
    }

    return 0;
}
