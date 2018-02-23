#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;

    while (scanf("%d", &k)==1) {
        
        vector<pair<int, int>> vii;
        int l = k*2;
        for (int i = k+1; i <= l; i++) {
            int a = i*k;
            int b = i-k;
            
            int y = a/b;
            if (y*b == a) {
                int y = a/b;
                vii.push_back(make_pair(y, i));
            }
        }
        
        printf("%d\n", (int)vii.size());
        for (pair<int, int> ii : vii) {
            printf("1/%d = 1/%d + 1/%d\n", k, ii.first, ii.second);
        }
    }

    return 0;
}
