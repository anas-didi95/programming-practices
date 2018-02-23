#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<< ' '
#define dbgl cerr<<endl

int n;

int main() {
    scanf("%d", &n);

    int h[n+1];
    for (int i = 0; i < n; i++) scanf("%d", &h[i]);

    int i_max, max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (h[i] > max) {
            i_max = i+1;
            max = h[i];
        }
    }

    int i_min, min = INT_MAX;
    for (int i = n-1; i >= 0; i--) {
        if (h[i] < min) {
            i_min = i+1;
            min = h[i];
        }
    }
    //dbg("min = "); dbg(min); dbgl; dbg("max = "); dbg(max); dbgl;
    
    int c = (i_min<i_max?-1:0);
    //dbg("c ="); dbg(c); dbgl;
    c += (i_max-1)+(n-i_min);
    printf("%d\n", c);

    return 0;
}
