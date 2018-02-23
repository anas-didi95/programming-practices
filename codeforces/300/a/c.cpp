#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

vector<int> s1, s2, s3;
int n;

int main() {
    scanf("%d", &n);
    
    queue<int> pos, neg, zero;
    int x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x < 0) neg.push(x);
        else if (x > 0) pos.push(x);
        else zero.push(x);
    }
    
    if (neg.size() > 0) {
        s1.push_back(neg.front());
        neg.pop();
    }

    if (neg.size() > 1) {
        for (int i = 0; i < 2; i++) {
            s2.push_back(neg.front());
            neg.pop();
        }
    } 
    else {
        s2.push_back(pos.front());
        pos.pop();
    }

    while (!neg.empty()) {
        s3.push_back(neg.front());
        neg.pop();
    }
    while (!zero.empty()) {
        s3.push_back(zero.front());
        zero.pop();
    }
    while (!pos.empty()) {
        s3.push_back(pos.front());
        pos.pop();
    }
    
    int l = s1.size();
    printf("%d ", l);
    for (int i = 0; i < l; i++) {
        printf((i==l-1?"%d\n":"%d "), s1[i]);
    }
    l = s2.size();
    printf("%d ", l);
    for (int i = 0; i < l; i++) {
        printf((i==l-1?"%d\n":"%d "), s2[i]);
    }
    l = s3.size();
    printf("%d ", l);
    for (int i = 0; i < l; i++) {
        printf((i==l-1?"%d\n":"%d "), s3[i]);
    }

    return 0;
}
