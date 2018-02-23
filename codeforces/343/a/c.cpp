#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int main() {
    int n; scanf("%d", &n);

    int a[10];
    memset(a, 0, sizeof(a));
    
    int x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        a[x]++;
    }
    
    vector<int> v;
    while (a[1] > 0 && a[2] > 0 && a[4] > 0) {
        v.push_back(1); a[1]--;
        v.push_back(2); a[2]--;
        v.push_back(4); a[4]--;
    }
    while (a[1] > 0 && a[2] > 0 && a[6] > 0) {
        v.push_back(1); a[1]--;
        v.push_back(2); a[2]--;
        v.push_back(6); a[6]--;
    }
    while (a[1] > 0 && a[3] > 0 && a[6] > 0) {
        v.push_back(1); a[1]--;
        v.push_back(3); a[3]--;
        v.push_back(6); a[6]--;
    }

    if (int(v.size()!=n)) printf("-1\n");
    else {
        for (int i = 1; i <= n; i++) {
            printf((i%3==0?"%d\n":"%d "), v[i-1]);
        }
    }

    return 0;
}
