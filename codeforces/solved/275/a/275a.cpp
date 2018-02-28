#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl
#define M 4

int dr[M] = {-1, 0, 1, 0};
int dc[M] = {0, 1, 0, -1};

int main() {
    bool g[3][3];
    memset(g, 1, sizeof(bool)*3*3);
    
    int v;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cin >> v;
            if (v%2==0) continue;
            for (int i = 0; i < M; i++) {
                int ar = r+dr[i], ac = c+dc[i];
                if (ar < 0 || ar >= 3 || ac < 0 || ac >= 3) continue;
                g[ar][ac] = !g[ar][ac];
            }
            g[r][c] = !g[r][c];
        }
    }

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << g[r][c];
        }
        cout << endl;
    }

    return 0;
}
