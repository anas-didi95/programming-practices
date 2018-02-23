#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

struct coor {
    int r, c;
};

int m;
vector<coor> p1, p3;

int main() {
    while(scanf("%d", &m)==1) {

        p1.clear();
        p3.clear();
    
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < m; c++) {
                char x;
                cin >> x;
                if (x == '1') {
                    coor p;
                    p.r = r;
                    p.c = c;
                    p1.push_back(p);
                }
                else if (x == '3') {
                    coor p;
                    p.r = r;
                    p.c = c;
                    p3.push_back(p);
                }
            }
        }
        //dbg("size p3"); dbg(p3.size()); dbgl;
        //dbg("size p1"); dbg(p1.size()); dbgl;
    
        vector<int> d_min;
        for (int i = 0; i < int(p1.size()); i++) {
            int curr = INT_MAX;
            for (int j = 0; j < int(p3.size()); j++) {
                int d = abs(p1[i].r-p3[j].r)+abs(p1[i].c-p3[j].c);
                if (d < curr) curr = d;
            }
            d_min.push_back(curr);
        }
        sort(d_min.begin(), d_min.end());

        printf("%d\n", d_min[int(d_min.size()-1)]);
    }

    return 0;
}
