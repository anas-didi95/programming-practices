#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

ll x, y;

int main() {
    //scanf("%lld %lld", &x, &y);
    cin >> x >> y;

    ll t = abs(x)+abs(y);

    if (x > 0 && y > 0)
        cout << "0 " << t << " " << t << " 0" << endl;
        //printf("0 %lld %lld 0", t, t);
    else if (x > 0 && y < 0) 
        cout << "0 " << -1*t << " " << t << " 0" << endl;
        //printf("0 %lld %lld 0", -1*t, t);
    else if (x < 0 && y < 0) 
        cout << -1*t << " 0 0 " << -1*t << endl; 
        //printf("%lld 0 0 %lld", -1*t, -1*t);
    else if (x < 0 && y > 0) 
        cout << -1*t <<  " 0 0 " << t << endl;
        //printf("%lld 0 0 %lld", -1*t, t);

    return 0;
}


