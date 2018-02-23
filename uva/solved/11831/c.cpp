#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int R, C, M;

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};

int main() {
    while (cin >> R >> C >> M) {
        if (R == 0 && C == 0 && M == 0) break;
        
        string g[R];
        for (int i = 0; i < R; i++) cin >> g[i];
    
        int di, pr, pc;
        for (int r = 0; r < R; r++) {
            for (int c = 0; c < C; c++) {
                switch (g[r][c]) {
                    case 'N':
                        di = 0;
                        pr = r;
                        pc = c;
                        break;
                    case 'S':
                        di = 2;
                        pr = r;
                        pc = c;
                        break;
                    case 'L':
                        di = 1;
                        pr = r;
                        pc = c;
                        break;
                    case 'O':
                        di = 3;
                        pr = r;
                        pc = c;
                        break;
                }
            }
        }
        
        char c;
        int t = 0;
        while (M--) {
            cin >> c;
            if (c == 'D') {
                di = (di+1)%4;
                //dbg("turn right"); dbg(di); dbgl;
            }
            else if (c == 'E') {
                di = di-1;
                if (di < 0) di = 3;
                //dbg("turn left"); dbg(di); dbgl;
            }
            else if (c == 'F') {
                int tr = pr+dr[di];
                int tc = pc+dc[di];

                if (tr < 0 || tr >= R || tc < 0 || tc >= C) continue;
                else if (g[tr][tc] == '#') continue;
                else {
                    pr = tr;
                    pc = tc;
                    if (g[pr][pc] == '*') {
                        t++;
                        g[pr][pc] = '.';
                    }
                }
            }
        }

        printf("%d\n", t);

        //for (string s : g) { dbg(s); dbgl; }
    }

    return 0;
}

