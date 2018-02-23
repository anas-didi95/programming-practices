#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<endl
#define dbgl cerr<<endl

#define N 1000110

int n, m, k, v;
vector<int> vi[N];

int main() {
    while(scanf("%d %d", &n, &m)==2) {
        for (int i = 0; i < N; i++) vi[i].clear();

        int a[N];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        for (int i = 0; i < n; i++) vi[a[i]].push_back(i+1);

        while (m--) {
            scanf("%d %d", &k, &v);
            if (vi[v].size() < k) printf("0\n");
            else printf("%d\n", vi[v][k-1]);
        }
    }


    return 0;
}
