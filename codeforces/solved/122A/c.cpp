#include <bits/stdc++.h>
using namespace std;

int lucky[] = {
    4, 7, 
    44, 47, 74, 77, 
    444, 447, 474, 477, 744, 747, 774, 777
};

int main() {
    int n;
    cin >> n;
    
    bool flag = false; 

    int n2 = n;
    while (n2 > 0) {
        int r = n2 % 10; 
        if (r != 7 && r != 4)
            break;
        n2 /= 10;
    }
    cerr << n2 << endl;
    if (n2 == 0) flag = true; 
    
    if (!flag) {
        for (int i : lucky) {
            if (n % i == 0)
                flag = true;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}
