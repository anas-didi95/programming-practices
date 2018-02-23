#include <bits/stdc++.h>
using namespace std;

#define dg(x) cerr << x << " "
#define dgl cerr << endl

typedef long long ll;

struct db {
    string s;
    ll l, h;
};

int main() {
    int t;
    scanf("%d", &t);
    
    bool newline = false;
    while (t--) {
        int d;
        scanf("%d", &d);

        if (newline) printf("\n");
        else newline = true;

        db dt[d];
        for (int i = 0; i < d; i++) {
            cin >> dt[i].s >> dt[i].l >> dt[i].h; 
        }

        int q;
        scanf("%d", &q);
        
        while (q--) {
            int p;
            scanf("%d", &p);
            
            bool find = false;
            int idx;
            for (int i = 0; i < d; i++) {
                if (dt[i].l <= p && p <= dt[i].h) {
                    if (find) { 
                        find = false; 
                        break;
                    }
                    else {
                        find = true;
                        idx = i;
                    }
                }
            }

            printf("%s\n", (find?dt[idx].s.c_str():"UNDETERMINED"));
        }
    }

    return 0;
}
