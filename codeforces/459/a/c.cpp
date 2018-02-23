#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<z<<' '
#define dbgl cerr<<endl

struct pt {
    int x, y;
};

int main() {
    pt p1, p2, p3, p4;

    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);
    
    bool found = true;
    if (p1.y == p2.y) {
        int a = abs(p1.x - p2.x);
        p3.x = p1.x;
        p3.y = p1.y + a;
        p4.x = p2.x;
        p4.y = p2.y + a;
    }
    else if (p1.x == p2.x) {
        int a = abs(p1.y - p2.y);
        p3.x = p1.x + a;
        p3.y = p1.y;
        p4.x = p2.x + a;
        p4.y = p2.y;
    }
    else {
        int a = abs(p1.x - p2.x);
        if (a != abs(p1.y - p2.y)) {
            found = false;
        }
        else {
            p3.x = p1.x;
            p3.y = p2.y;
            p4.x = p2.x;
            p4.y = p1.y;
        }
    }
    
    if (found) printf("%d %d %d %d\n", p3.x, p3.y, p4.x, p4.y);
    else printf("-1\n");

    return 0;
}
