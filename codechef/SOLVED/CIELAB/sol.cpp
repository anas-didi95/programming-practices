#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        int c = abs(a-b);
        if (c % 10 == 9)
            cout << c-1 << endl;
        else
            cout << c+1 << endl;

    }

    return 0;
}
