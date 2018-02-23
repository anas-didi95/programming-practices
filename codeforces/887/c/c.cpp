#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

int main() {
    cin >> n;

    bool c[n+10] = {false};
    vector<int> v;
    int i = 2;
    while (!c[i]) {
        v.push_back(i);
        c[i] = true;
        i--;
        if (i == 0) i = n;
    }
    v.push_back(i);
    
    int sz = v.size();
    printf("%d\n", sz);
    for (int i = 0; i < sz; i++) printf((i==sz-1?"%d\n":"%d "), v[i]);

    return 0;
}
