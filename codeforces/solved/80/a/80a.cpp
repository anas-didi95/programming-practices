#include <bits/stdc++.h>
using namespace std;

#define dbg(x,v) cerr<<x<<'='<<v<<endl
#define M 110

typedef vector<int> vi;
typedef vector<int>::iterator vii;

vi primes;

void seive() {
    bitset<M> b;
    b.flip();
    for (int i = 2; i < M; i++) {
        if (b[i]) {
            for (int j = i*i; j < M; j+=i) b[j] = false;
            primes.push_back(i);
        }
    }
}

int main() {
    seive();

    int n, m;
    cin >> n >> m;

    vii it = lower_bound(primes.begin(), primes.end(), n);
    //dbg("it",*(it+1));

    if (it != primes.end() && *(it+1) == m) cout << "YES";
    else cout << "NO";
    cout << endl;

    return 0;
}
    
