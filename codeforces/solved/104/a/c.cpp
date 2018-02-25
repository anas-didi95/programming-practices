#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

int n;

int main() {
    int card[12];
    for (int i = 1; i <= 11 ; i++) card[i] = 4;

    card[10] *= 4; card[10]--;

    scanf("%d", &n);

    int b = n - 10;

    int w = 0;
    for (int i = 1; i <= 11; i++) {
        if (b-i == 0) w += card[i];
    }

    printf("%d\n", w);

    return 0;
}
