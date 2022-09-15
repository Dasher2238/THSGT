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

void solve() {
	ll n, x; cin >> n;
	ll time[11];
	for (int i = 0 ; i <= 10 ; ++i)
		time[i] = 0;
	for (int i = 0 ; i < n ; ++i)
	{
		cin >> x;
		time[x]++;
	}
	for (int i = 0 ; i <= 10 ; ++i)
		if (time[i] != 0) cout << i << " " << time[i] << "\n";
}

int main() {
	freopen("THONGKE.INP", "r", stdin);
	freopen("THONGKE.OUT", "w", stdout);
	fast;
	int tc = 1;
	// cin >> tc;
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
	}
}


