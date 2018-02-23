#include <bits/stdc++.h>
using namespace std;

#define dg(x) cerr<<x<<' '
#define dgl cerr<<endl

int n;
int b[10010];
int m;
string w;

int main() {
    while (scanf("%d", &n)==1) {
        for (int i = 0; i < n; i++) scanf("%d", &b[i]);
        scanf("%d", &m);
        getline(cin, w);

        sort(b, b+n);
        int x, y, d = INT_MAX;
        for (int i = 0; i < n; i++) {
            int v = m-b[i];
            if (binary_search(b, b+n, v) && b[i]<=v) {
                if (v == b[i]) {
                    int c = 0;
                    for (int i = 0; i < n; i++) {
                        if (v == b[i]) c++; 
                    }
                    if (c < 2) continue; 
                }
                if (d > abs(v-b[i])) {
                    x = b[i];
                    y = v;
                    d = abs(y-x);
                } 
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n", x, y);
        printf("\n");
    }

    return 0;
}
