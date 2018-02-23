#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int dl,dr;
double dp, al;

double l[110];

int main() {
   while (scanf("%d %lf %lf %d", &dl, &dp, &al, &dr)==4) {
       if (dl < 0) break;

       for (int i = 0; i < 100; i++) l[i] = -1;

       for (int i = 0; i < dr; i++) {
           int m; double d;
           scanf("%d %lf", &m, &d);
           l[m] = d;
       }
        
       double car = dp+al;
       car = car - (car*l[0]);
       double pay = al/dl;
       int ans;
       dbg(al); dbg(car); dbgl;
       if (al < car) ans = 0;
       else {
           for (int i = 1; i <= dl; i++) {
               if (l[i] == -1) l[i] = l[i-1];
               al -= pay;
               car -= (car*l[i]);
               dbg(al); dbg(car); dbgl;
               if (al < car) {
                   ans = i;
                   break;
               }
           }
       }

       for (int i = 0; i <= dl; i++) dbg(l[i]); dbgl;

       printf("%d %s\n", ans, (ans==1?"month":"months"));
   } 

   return 0;
}
