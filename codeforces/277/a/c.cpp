#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

const int M = 110;
int fa[M];
int n, m, k;
vector<int> e[M];
bool v[M];

int find(int x) {
    return (fa[x]==x ? x : find(fa[x]));
}

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) fa[i] = i;
 
    bool flag = false;
    int k, l;
    for (int i = 1;i <= n; i++) {
        scanf("%d", &k);
        if (k) flag = true;
        while (k--) {
            scanf("%d", &l);
            e[l].push_back(i);
        }
    }

    if (!flag) {
        printf("%d\n", n);
        return 0;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j < e[i].size(); j++) {
            int x = find(e[i][j]);
            int y = find(e[i][j-1]);
            //dbg(x); dbg(y); dbgl;
            if (x != y) fa[x] = y;
        }
    }

    //for (int i = 1; i <= n; i++) dbg(fa[i]); dbgl;

    for (int i = 1; i <=n; i++) v[find(i)] = true;
    int ans = 0;
    for (int i = 1; i <=n; i++) if (v[i]) ans++;
    printf("%d\n", ans-1);
    return 0;
}
