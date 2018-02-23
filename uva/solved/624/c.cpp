#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int t, n;

int take(int n, int i) {
    if (n < 0) return INT_MIN;
    if (i == 0 || n == 0) return 0;
    
    int sum = max(take(n-v[i-1], i-1)+v[i-1], take(n, i-1));

    return sum;
}

bool trace(int n, int i) {
    if (n == 0) return true;
    if (n < 0 || i == 0) return false;
    
    if (trace(n-v[i-1], i-1)) {
        printf("%d ", v[i-1]);
        return true;
    }
    else return trace(n, i-1);
}

int main() {
    
    while (scanf("%d", &n)==1) {
        scanf("%d", &t);
        
        v.clear();
        for (int i = 0; i < t; i++) {
            int x;
            scanf("%d", &x);
            v.push_back(x);
        }
        
        int total = take(n, t);
        trace(total, t);
        printf("sum:%d\n", total);
    }

    return 0;
}
