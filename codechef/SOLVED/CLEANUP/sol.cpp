#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int m, n;
        cin >> n >> m;

        int job[n+1];
        memset(job, 0, sizeof(job));
        while (m--) {
            int i;
            cin >> i;
            job[i] = -1;
        }
        
        bool chef = true;
        for (int i = 1; i <= n; i++) {
            if (job[i] == 0) {
                if (chef) job[i] = 1;
                else job[i] = 2;
                chef = !chef;
            }
        }

        for (int i = 0; i <= n; i++) {
            if (job[i] == 1) {
                cout << i;
                if (i != n) cout << " ";
            }
        }
        cout << endl;
       
        for (int i = 0; i <= n; i++) {
            if (job[i] == 2) {
                cout << i;
                if (i != n) cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

