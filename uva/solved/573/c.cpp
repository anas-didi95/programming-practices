#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

double h, u, d, f;

int main() {
    while (scanf("%lf %lf %lf %lf", &h, &u, &d, &f)==4) {
        if (h == 0) break;

        int day = 0, result = 0;
        double l = f/100*u, hc = 0;
        do {
            day++;
            hc += u;
            if (hc > h) result = 1;
            u -= l;
            if (u < 0) u = 0;
            hc -= d;
            if (hc < 0) result = -1;
            //dbg(day); dbg(hc); dbg(u); dbgl;
        } while (result == 0);

        printf("%s on day %d\n", (result==1?"success":"failure"), day);        
    }

    return 0;
}
