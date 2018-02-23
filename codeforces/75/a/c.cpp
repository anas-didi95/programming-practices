#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl

typedef long long ll;

ll a, b;

ll remZero(ll n) {
    stringstream ss;
    string s;
    ll nn;

    ss << n;
    ss >> s;

    //replace(s.begin(), s.end(), '0', '\0');
    int l = s.size();
    string s1 = "";
    for (int i = 0; i < l; i++) {
       if (s[i] != '0') s1 += s[i]; 
    }

    //dbg("s1"); dbg(s1);
    
    ss.clear();
    ss << s1;
    ss >> nn;
    
    //dbg("nn"); dbg(nn); dbgl;
    return nn;
}

int main() {
    cin >> a >> b;

    ll c = a + b;
     
    if (remZero(a)+remZero(b) == remZero(c)) printf("YES");
    else printf("NO");
    printf("\n");

    return 0;
}
