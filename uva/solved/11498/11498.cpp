#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;

    while (cin >> k) {
        if (k == 0) break;
        
        int cd[2];
        cin >> cd[0] >> cd[1];

        int rs[2];
        for (int i = 0; i < k; i++) {
            cin >> rs[0] >> rs[1];
            
            if (rs[0] == cd[0] || rs[1] == cd[1])
                cout << "divisa" << endl;
            else if (rs[0] > cd[0] && rs[1] > cd[1])
                cout << "NE" << endl;
            else if (rs[0] > cd[0] && rs[1] < cd[1])
                cout << "SE" << endl;
            else if (rs[0] < cd[0] && rs[1] < cd[1])
                cout << "SO" << endl;
            else if (rs[0] < cd[0] && rs[1] > cd[1])
                cout << "NO" << endl;
        }
    }

    return 0;
}
