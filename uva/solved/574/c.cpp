#include <bits/stdc++.h>
using namespace std;

#define dg(x) cerr<<x<<" "
#define dgl cerr<<endl

vector<int> vi;
set< vector<int> > svi;
int t, n, x[20];

void bt(int s, int idx) {
    if (s == 0) {
        if (svi.find(vi) == svi.end()) {
            int l = vi.size();
            for (int i = 0; i < l; i++) printf(i==l-1?"%d\n":"%d+", vi[i]);
            svi.insert(vi);
        } 
    }

    for (int i = idx+1; i < n; i++) {
        if (s-x[i] >= 0) {
            vi.push_back(x[i]);
            bt(s-x[i], i);
            vi.pop_back();
        } 
    }
}

int main() {
   
    while (scanf("%d %d", &t, &n)==2) {
        if (t == n && n == 0) break;

        for (int i = 0; i < n; i++) scanf("%d", &x[i]);

        svi.clear();
        vi.clear();
        printf("Sums of %d:\n", t);
        bt(t, -1);
        if (svi.size() == 0) {
            printf("NONE\n"); 
        }
    }

    return 0;
}
