#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    pair<int, int> one;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> n;
            if (n == 1)
                one = make_pair(i, j);
        }
    }

    int total = abs(one.first-3) + abs(one.second-3);
    cout << total << endl;

    return 0;
}
