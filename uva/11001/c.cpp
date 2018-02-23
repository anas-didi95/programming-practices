#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int vt, vo;
map<double, int> m;

int main() {
    while (scanf("%d %d", &vt, &vo)==2) {
        if (vt == vo && vo == 0) break;
        
        m.clear();
        int h = vt/vo, ans = 0;
        double l = INT_MIN;
        for (int i = 1; i <= h; i++) {
            double v = (double)vt/i;
            double d = 0.3*(sqrt(v-vo));
            double a = d*i/3;
            dbg(i); dbg(v); dbg(d); dbg(a);
            if (a > l) {
                ans = i;
                l = a;
                if (m.find(l) == m.end()) m[l] = 1;
                else m[l]++;
                dbg(m[l]);
            }
            dbgl;
        }
        
        dbg(l); dbg(m[l]); dbgl;
        if (m[l] == 1)
            printf("%d\n", ans);
        else
            printf("0\n");
    }

    return 0;
}
