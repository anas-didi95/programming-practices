#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int R, C, M, N;
int even, odd;
char g[110][110];
bool visited[110][110];

void solve(int r, int c, int v) {
    if (r == 0 && c == 0 && v != 0) {
        if (v%2 == 0) even++;
        else odd++;
        return;
    }
    if (r < 0 || r >= R || c < 0 || c >= C) return;
    if (g[r][c] == 'w') return;
    if (visited[r][c]) return;

    dbg(r); dbg(c); dbgl;
    
    visited[r][c] = true;
    solve(r+M, c+N, v+1);
    solve(r+M, c-N, v+1);
    
    solve(r-M, c+N, v+1);
    solve(r-M, c-N, v+1);
    
    solve(r+N, c+M, v+1);
    solve(r+N, c-M, v+1);

    solve(r-N, c+M, v+1);
    solve(r-N, c-M, v+1);
    visited[r][c] = false;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d %d", &R, &C, &M, &N);
        for (int r = 0; r < R; r++) 
            for (int c = 0; c < C; c++) {
                g[r][c] = '.';
                visited[r][c] = false;
            }

        int W; scanf("%d", &W);
        while (W--) {
            int r, c;
            scanf("%d %d", &r, &c);
            g[r][c] = 'w';
        }

        even = 0; odd = 0;
        solve(0, 0, 0);

        printf("Case %d: %d %d\n", (i+1), even, odd);
    }

    return 0;
}
