#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool save[2*10000100];

int main() {
    int n;

    while (cin >> n) {
        memset(save, false, sizeof(save));
        ll ko[n];
        ll ka[n];
        for (int i = 0; i < n; i++) {
            cin >> ko[i];
            save[ko[i]] = true;
        }
        for (int i = 0; i < n; i++) {
            cin >> ka[i];
            save[ka[i]] = true;
        }
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ll r = ko[i] ^ ka[j];
                if (save[r]) count++;
            }
        }
        
        cerr << count << endl;
        cout << (count%2==0?"Karen":"Koyomi") << endl;
    }
    
    return 0;
}
