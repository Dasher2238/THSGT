#pragma GCC target("popcnt")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include <iostream>

using namespace std;

void dbg_out() { cerr << endl; }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

ll tong(string s)
{
	int ans = 0, len = s.size();
	for (int i = 0 ; i < len ; ++i)
		ans += int(s[i]) - 48;
}

void solve() {
	string n; cin >> n;
	if (conver(n) % tong(n) == 0) cout << 1;
	else cout << 0;
}

int main() {
	fast;
	int tc = 1;
	// cin >> tc;
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
	}
}


