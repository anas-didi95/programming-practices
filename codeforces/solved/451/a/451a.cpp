#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int main() {
    int h, v;
    cin >> h >> v;

    int s = (h<v?h:v);

    cout << (s%2!=0?"Akshat":"Malvika") << endl;

    return 0;
}
