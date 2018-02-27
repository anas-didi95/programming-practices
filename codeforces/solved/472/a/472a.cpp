#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl

#define MAX 1000100

bitset<MAX> primes;

void seive() {
    primes.flip();

    for (int i = 2; i < sqrt(MAX); i++) {
        if (primes[i]) {
            for (int j = i*i; j < MAX; j+=i) primes[j] = false;
        }
    }
}

int main() {
    seive();
    //dbg('x',"done");

    int n; cin >> n;
    
    for (int i = n-1; i >= 0; i--) {
        if (!primes[i] && !primes[n-i]) {
            cout << (n-i) << ' ' << i << endl;
            break;
        }
    }

    return 0;
}

