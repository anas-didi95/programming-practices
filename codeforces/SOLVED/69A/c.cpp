#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int coor[3] = {0};
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        coor[0] += x;
        coor[1] += y;
        coor[2] += z;
    }
    
    cerr << coor[0] << " ";
    cerr << coor[1] << " ";
    cerr << coor[2] << endl;
    if ((coor[0] + coor[1] + coor[2]) == 0) {
        int x = abs(coor[0]);
        int y = abs(coor[1]);
        int z = abs(coor[2]);
        if (x == y && y == z)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
