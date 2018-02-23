#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        bool n[10] = {false};
        int tmp = y;
        int i = 0;
        while (tmp) {
           n[tmp%10] = true;
           tmp /= 10;
           i++;
        }
        int count = 0;
        for (bool b : n) {
            if (b) count++;
        }
        if (count == 4) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
