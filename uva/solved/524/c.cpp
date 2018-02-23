#include <bits/stdc++.h>
using namespace std;

#define dg(x) cerr << x << ' '
#define dgl cerr << endl

bool sv[100];
bool used[100];
int a[20];
int N;


void seive() {
    memset(sv, true, sizeof(sv));
    sv[0] = false;
    sv[1] = false;

    for (int i = 2; i < 100; i++)
        if (sv[i])
            for (int j = i*i; j < 100; j+=i) sv[j] = false;
}

void bt(int adj, int c) {
   if (c == N) {
        if (sv[a[0]+a[N-1]]) {
            for (int i = 0; i < N; i++) printf(i==N-1?"%d\n":"%d ", a[i]);
        }
   }

   for (int i = 2; i <= N; i++) {
        if (!used[i] && sv[adj+i]) {
            a[c] = i;
            used[i] = true;
            bt(i, c+1);
            used[i] = false;
        } 
   }
}

int main() {
    seive();

    int t = 1;
    while (scanf("%d", &N)==1) {
        if (t > 1) printf("\n");

        printf("Case %d:\n", t++);
        
        memset(used, false, sizeof(used));
        a[0] = 1;
        bt(1, 1);
    }

    return 0;
}
