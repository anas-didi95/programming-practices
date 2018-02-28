#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

int main() {
    int n; cin >> n;

    if (n%2!=0) cout << "-1" << endl;
    else {
        for (int i = n; i >= 2; i--) {
            cout << i <<  ' ';
        }
        cout << '1' << endl;
    }
    
    return 0;
}
        
