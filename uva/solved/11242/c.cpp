#include <bits/stdc++.h>
using namespace std;

int f, r;

int main() {
    
    while (scanf("%d", &f)==1) {
        if (f == 0) break;
        scanf("%d", &r);

        double ft[f], rt[r];
        for (int i = 0; i < f; i++) scanf("%lf", &ft[i]);
        for (int i = 0; i < r; i++) scanf("%lf", &rt[i]);

        vector<double> d;
        for (int i = 0; i < f; i++) {
            for (int j = 0; j < r; j++) {
                d.push_back(rt[j]/ft[i]);
            }
        }
        sort(d.begin(), d.end());
    
        double ans = INT_MIN;
        for (int i = 1; i < (int)d.size(); i++) {
            double x = d[i]/d[i-1];
            if (x > ans) ans = x;
        }

        printf("%.2lf\n", ans);
    }

    return 0;
}
