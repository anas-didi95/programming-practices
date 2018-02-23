#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x
#define dbgl cerr<<endl

const int d = 4;
int dr[d] = {-1, 0, 1, 0};
int dc[d] = {0, 1, 0, -1};

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    
    string g[R];
    for (int r = 0; r < R; r++) cin >> g[r];
    
    int t = 0;
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            if (g[r][c] == 'P') {
                for (int i = 0; i < d; i++) {
                    if (dr[i]+r < 0 || dr[i]+r >= R || dc[i]+c < 0 || dc[i]+c >= C) continue;
                    
                    if (g[dr[i]+r][dc[i]+c] == 'W') {
                        t++;
                        g[dr[i]+r][dc[i]+c] = '.';
                        break;
                    } 
                }
            }
        }
    }

    //for (int r = 0; r < R; r++) { for (int c = 0; c < C; c++) dbg(g[r][c]); dbgl; }

    printf("%d\n", t);

    return 0;
}
