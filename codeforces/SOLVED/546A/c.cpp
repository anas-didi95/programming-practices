#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ll k, n, w;
   cin >> k >> n >> w;

   ll cost = k;
   for (int i = 2; i <= w; i++) 
       cost += (i*k);

   ll borr = cost-n;
   cout << (borr<0 ? 0 : borr) << endl;

   return 0;
}
