#include <bits/stdc++.h>
using namespace std;

string s1, s2;

int main() {
    cin >> s1 >> s2;

    int l = s1.size();

    for (int i = 0; i < l; i++) 
        printf("%d", ((s1[i]-'0')^s2[i]-'0'));
    printf("\n");

    return 0;
}
