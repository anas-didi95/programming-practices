#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct coor {
    ll x, y;
};

ll t;
coor sp, ep;
string s;

int main() {
   cin >> t >> sp.x >> sp.y >> ep.x >> ep.y;
   cin >> s;

   ll c = -1;
   for (int i = 0; i < s.size(); i++) {
       ll x = sp.x, y = sp.y;
       ll dx = abs(x-ep.x), dy = abs(y-ep.y);
        
       //cout << s[i] << ' ';
       if (s[i] == 'E')  {
           ll v = x+1;
           ll d = abs(v-ep.x);
           if (d < dx) sp.x = v;
       }
       else if (s[i] == 'S') {
           ll v = y-1;
           ll d = abs(v-ep.y);
           if (d < dy) sp.y = v;
       }
       else if (s[i] == 'W') {
           ll v = x-1;
           ll d = abs(v-ep.x);
           if (d < dx) sp.x = v;
       }
       else if (s[i] == 'N') {
           ll v = y+1;
           ll d = abs(v-ep.y);
           //cout << d << ' ' << dy << ' ' << (d<dy) << ' ';
           if (d < dy) sp.y = v;
       }
       //cout << sp.x << ' ' << sp.y << endl;

       if (sp.x == ep.x && sp.y == ep.y) {
           c = i+1;
           break;
       }
   }

   printf("%d\n", c);
    
   return 0;
}
