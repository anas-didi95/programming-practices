#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int r, c;

int main() {
    scanf("%d %d", &r, &c);

    string g[r];
    for (int i = 0; i < r; i++) 
        cin >> g[i];
    
    /*for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            dbg(g[i][j]);
        dbgl;
    }*/

    int xr = 0;
    for (int i = 0; i < r; i++) {
        int v = 0;
        for (int j = 0; j < c; j++) 
            v |= (g[i][j]=='S');
        xr += v;
    }
    //dbg("xr = "); dbg(xr); dbgl;

    int xc = 0;
    for (int i = 0; i < c; i++) {
        int v = 0;
        for (int j = 0; j < r; j++)
            v |= (g[j][i]=='S');
        xc += v;
    }
    //dbg("xc = "); dbg(xc); dbgl;

    printf("%d\n", (r*c)-(xr*xc));

    return 0;
}
