#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int l, w, h;
        scanf("%d %d %d", &l, &w, &h);

        printf("Case %d: ", i+1);
        if (l <= 20 && w <= 20 && h <= 20) printf("good");
        else printf("bad");
        printf("\n");
    }

    return 0;
}
