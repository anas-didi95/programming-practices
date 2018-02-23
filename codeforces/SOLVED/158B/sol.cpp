#include <bits/stdc++.h>
using namespace std;

int arr[5];

int main() {
    int n;

    while (cin >> n) {
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++) {
            int s;
            cin >> s;
            arr[s]++;
        }

        int taxi = 0;
        while (arr[4] != 0) {
            arr[4]--;
            taxi++; cerr << 4 << endl;
        }
        while (arr[3] != 0) {
            if (arr[1] != 0) {
                arr[3]--;
                arr[1]--;
                taxi++; cerr << 31 << endl;
            }
            else {
                arr[3]--;
                taxi++; cerr << 3 << endl;
            }
        }
        while (arr[2] != 0) {
            if (arr[2] >= 2) {
                arr[2]-=2;
                taxi++; cerr << 22 << endl;
            }
            else if (arr[1] != 0) {
                if (arr[1] >= 2) {
                    arr[1]-=2;
                    arr[2]--;
                    taxi++; cerr << 211 << endl;
                }
                else {
                    arr[1]--;
                    arr[2]--;
                    taxi++; cerr << 21 << endl;
                }
            }
            else {
                arr[2]--;
                taxi++; cerr << 2 << endl;
            }
        }
        while (arr[1] != 0) {
            if (arr[1] >= 4) {
                arr[1]-=4;
                taxi++; cerr << 1111 << endl;
            }
            else if (arr[1] >= 3) {
                arr[1]-=3;
                taxi++; cerr << 111 << endl;
            }
            else if (arr[1] >= 2) {
                arr[1]-=2;
                taxi++; cerr << 11 << endl;
            }
            else {
                arr[1]--;
                taxi++; cerr << 1 << endl;
            }
        }
        cout << taxi << endl;
    }
}


