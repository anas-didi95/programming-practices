#include <bits/stdc++.h>
using namespace std;

#define MAX 10010

int main() {
    vector<int> sq;
    for (int i = 0; i < MAX; i++) {
        sq.push_back(i*i);
    }

    int n;
    while (scanf("%d", &n) == 1) {
        for (int i = 0; i < (int)sq.size(); i++) {
            if (sq[i] >= (int)pow(10, n)) break;
            
            int d = pow(10, n/2);
            int a = sq[i] / d;
            int b = sq[i] % d;
            if (pow(a+b, 2) == sq[i]) {
                printf("%0*d\n", n, sq[i]);
            }
        }
    }

    return 0;
}
