#include <bits/stdc++.h>
using namespace std;

double n;

int main() {
    scanf("%lf", &n);
    
    double p = 0, x;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &x);
        p += x;
    }

    printf("%.12lf\n", (p/n));

    return 0;
}
