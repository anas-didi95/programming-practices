#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
   
    int total = 0;
    while (n--) {
        int count = 0;
        for (int i = 0; i < 3; i++) {
            int j;
            cin >> j;
            if (j == 1) count++;
        }
        if (count >= 2) total++;
    }

    cout << total << endl;

    return 0;
}
