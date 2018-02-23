#include <bits/stdc++.h>
using namespace std;

int main() {
    int b[9];

    while (scanf("%d %d %d %d %d %d %d %d %d",
                &b[0], &b[1], &b[2],
                &b[3], &b[4], &b[5],
                &b[6], &b[7], &b[8]) == 9) {
        int val = INT_MAX;
        string s = "";
        int a;

        //BCG
        a = b[3]+b[6]+b[2]+b[8]+b[1]+b[4];
        if (a < val) {
            val = a;
            s = "BCG";
        }

        //BGC
        a = b[3]+b[6]+b[1]+b[7]+b[2]+b[5];
        if (a < val) {
            val = a;
            s = "BGC";
        }
        
        //CBG
        a = b[5]+b[8]+b[0]+b[6]+b[1]+b[4];
        if (a < val) {
            val = a;
            s = "CBG";
        }

        //CGB
        a = b[5]+b[8]+b[1]+b[7]+b[0]+b[3];
        if (a < val) {
            val = a;
            s = "CGB";
        }

        //GBC
        a = b[4]+b[7]+b[0]+b[6]+b[2]+b[5];
        if (a < val) {
            val = a;
            s = "GBC";
        }

        //GCB
        a = b[4]+b[7]+b[2]+b[8]+b[0]+b[3];
        if (a < val) {
            val = a;
            s = "GCB";
        }

        printf("%s %d\n", s.c_str(), val);
    }

    return 0;
}
