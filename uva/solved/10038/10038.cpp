#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

#define MAX 3010

int arr[MAX];

int main() {
    int n;
    
    while (cin >> n) {
        int num[n];
       
        memset(arr, false, sizeof(arr));
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            arr[i] = true;
        }
        arr[0] = false;
        bool jolly = true;

        for (int i = 0; i < n-1 && jolly; i++) {
            int diff = abs(num[i]-num[i+1]);
            if (!arr[diff]) jolly = false;
            else arr[diff] = false;
        }

        cout << (jolly ? "Jolly" : "Not jolly") << endl;
    }
    return 0;
}


