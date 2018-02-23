#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n, p;
set<string> sts;

int main() {
    
    int l = 1;
    while (cin >> n >> p) {
        if (n == 0 && p == 0) break;

        if (l > 1) printf("\n");
        
        sts.clear();
        cin.ignore();
        for (int i = 0; i < n; i++) {
            string s; getline(cin, s);
            sts.insert(s);
        }
        //dbgl;

        double maxCmp = -1;
        string pro;
        double maxPrc = INT_MAX;
        for (int i = 0; i < p; i++) {
            string s; getline(cin, s);
            double price; cin >> price;
            int c; cin >> c;
            //dbg(s); dbg(price); dbg(c);
            int t = 0;
            cin.ignore();
            while (c--) {
                string sc; getline(cin, sc);
                //if (sts.find(sc) != sts.end()) t++;
                t++;
            }
            double cmp = (double)t/n;
            //dbg(cmp);
            if (cmp > maxCmp || (cmp == maxCmp && price < maxPrc)) {
                maxCmp = cmp;
                pro = s;
                maxPrc = price;
            }
        }

        printf("RFP #%d\n", l++);
        printf("%s\n", pro.c_str());
    }

    return 0;
}
