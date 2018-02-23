#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

ll s, n, t;
set<int> ss1; set<int> ss2;

int main() {
   scanf("%lld", &t);

   int c = 1;
   while (t--) {
       if (c++ > 1) printf("\n");
        
       scanf("%lld", &n);
       for (ll s2 = 1; s2 <= 9876543210/n; s2++) {
           ll s1 = s2*n;
           ss1.clear(); ss2.clear();
           int cs1 = 0; int cs2 = 0;
           ll tmp;
           tmp = s1; while (tmp) { ss1.insert(tmp%10); cs1++; tmp/=10; }
           tmp = s2; while (tmp) { ss2.insert(tmp%10); cs2++; tmp/=10; }
           //dbg(s1); dbg(ss1.size()); dbg(cs1);
           if (cs1 != (int)ss1.size() || cs2 != (int)ss2.size()) continue;
           printf("%lld / %lld = %lld\n", s1, s2, n);
       }
   }

   return 0;
}
