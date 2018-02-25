#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cerr<<x<<' '
#define dbgl cerr<<endl
#define max(a,b) (a>b?a:b)

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int m_t = 0, t;

    t = a + b + c;
    m_t = max(m_t, t);

    t = a + b * c;
    m_t = max(m_t, t);

    t = (a + b) * c;
    m_t = max(m_t, t);

    t = a * b * c;
    m_t = max(m_t, t);

    t = a * b + c;
    m_t = max(m_t, t);

    t = a * (b + c);
    m_t = max(m_t, t);

    cout << m_t << endl;
     
    return 0;
}

