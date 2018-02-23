#include <bits/stdc++.h>
#define dbg(x) cerr << x << " "
#define dbgl cerr << endl;
using namespace std;

#define t 5

int x[t];

bool bt(int n, int i) {
    //dbg(x[i]); dbg(n); dbgl
    if (i == 5) {
        if (n == 23) return true;
        else return false;
    }
    
    if (bt(n+x[i], i+1) || bt(n-x[i], i+1) || bt(n*x[i], i+1))
        return true;

    return false;
}

int main() {
   while (true) {
        for (int i = 0; i < t; i++) scanf("%d", &x[i]);

        if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3] && x[3] == x[4] &&
                x[4] == 0) break;
        
        sort(x, x+t);
        bool find = false;
        do {
            if (bt(x[0], 1)) find = true;
        } while (!find && next_permutation(x, x+t));

        printf("%s\n", (find ? "Possible" : "Impossible"));
   }  

   return 0;
}
