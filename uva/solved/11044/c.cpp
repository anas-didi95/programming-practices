#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    while (a--) {
        int n, m;
        cin >> n >> m;
        cout << (n/3)*(m/3) << endl;
    }

    return 0;
}
