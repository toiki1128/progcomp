#include "bits/stdc++.h"
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, n, k) for (int i = n; i < k; i++)
#define P(p) cout << (p) << endl;
#define sP(p) cout << setprecision(15) << fixed << p << endl;
#define vi vector<int>
#define printv(v)                      \
    for (int i = 0; i < v.size(); i++) \
        P(v[i]);
#define printt(a, b) cout << a << " " << b << endl;
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    int count[3];
    rep(i, s.length())
    {
        char c;
        cin >> c;
        count[c - 'a']++;
    }
    int mini = min(count[0], min(count[1], count[2]));
    int maxi = max(count[0], max(count[1], count[2]));
    P(abs(mini - maxi) >= 2 ? "NO" : "YES");
}

int main()
{
    solve();
    return 0;
}
