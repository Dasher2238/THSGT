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
#define ar array
#define endl "\n"
#define ll long long
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

ll tong_uoc (ll n)
{
	ll sum = 0;
	for (ll i = 2 ; i * i <= n ; ++i)
	{
		if (i * i == n) {sum += i; continue;}
		else if (n % i == 0) sum = sum + i + n / i;
	}
	return sum;
}

void solve() {
	ll n, m; cin >> n >> m;
	if (tong_uoc(n) == tong_uoc(m)) cout << "YES";
	else cout << "NO";
}

int main() {
	fast;
	freopen("ANHEM.INP", "r", stdin);
	freopen("ANHEM.OUT", "w", stdout);
	int tc = 1;
	// cin >> tc;
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
	}
}


