#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    int start = true;
    while (scanf("%d", &k)==1) {
        if (k == 0) break;

        if (start) start = false;
        else printf("\n");

        int n[k];
        for (int i = 0; i < k; i++) scanf("%d", &n[i]);
        sort(n, n+k);

        for (int a = 0; a < k-5; a++)
            for (int b = a+1; b < k-4; b++)
                for (int c = b+1; c < k-3; c++)
                    for (int d = c+1; d < k-2; d++)
                        for (int e = d+1; e < k-1; e++)
                            for (int f = e+1; f < k; f++)
                                printf("%d %d %d %d %d %d\n", 
                                        n[a], n[b], n[c], n[d], n[e], n[f]);
    }

    return 0;
}
