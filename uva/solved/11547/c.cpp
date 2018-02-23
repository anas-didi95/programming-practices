#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        ll n;
        scanf("%lld", &n);

        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;

        n %= 100;
        n /= 10;
        
        printf("%lld\n", abs(n));
    }
    
    return 0;
}
