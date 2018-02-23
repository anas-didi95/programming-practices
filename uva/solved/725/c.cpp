#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

int main() {
    int t = 1;
    while (scanf("%d", &n)==1) {
        if (n == 0) break;
       
        if (t++ > 1) printf("\n");

        bool has = false;
        for (int fghij = 1234; fghij <= 98765/n; fghij++) {
            int abcde = fghij*n;
            int used; used = (fghij<10000);
            
            int tmp;
            tmp = abcde; while (tmp) { used |= 1 << (tmp%10); tmp/=10; }
            tmp = fghij; while (tmp) { used |= 1 << (tmp%10); tmp/=10; }
            
            if (used == (1<<10)-1) {
                printf("%05d / %05d = %d\n", abcde, fghij, n); 
                has = true;
            }
        }

        if (!has) {
            printf("There are no solutions for %d.\n", n);
        }
    }

    return 0;
}
