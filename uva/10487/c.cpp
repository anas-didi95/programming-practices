#include <bits/stdc++.h>
using namespace std;

vector<int> vi;

int main() {
    int n;
    
    int c = 1;
    while (scanf("%d", &n)==1) {
        if (n == 0) break;
        
        vi.clear();
        int a[n+1];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                //if (a[i] == a[j]) continue;
                vi.push_back(a[i]+a[j]);
            }
        }
        sort(vi.begin(), vi.end());

        int m;
        scanf("%d", &m);
        printf("Case %d:\n", c++);
        for (int i = 0; i < m; i++) {
            int q; 
            scanf("%d", &q);
            int mindiff = INT_MAX;
            int ans;
            for (int n : vi) {
                int diff = abs(n-q);
                if (diff <= mindiff) {
                    ans = n;
                    mindiff = diff;
                }
            }
            printf("Closest sum to %d is %d.\n", q, ans);
        }
    }

    return 0;
}
