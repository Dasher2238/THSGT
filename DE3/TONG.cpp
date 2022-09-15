#pragma GCC target("popcnt")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include <iostream>
#include <vector>

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
const ll INF = 1e9 + 5;

vector<ll> v;

void tong(ll max_num)
{
	v.resize(max_num + 1);
	v[0] = 0;
	v[1] = 1;
	for (ll i = 2 ; i <= max_num ; ++i)
	{
		v[i] = v[i - 1] + i;
	}
}

void solve() {
	ll n; cin >> n;
	ll a[n + 1];
	cin >> a[0];
	ll max_num = a[0];
	for (int i = 1 ; i < n ; ++i)
	{
		cin >> a[i];
		if (a[i] > max_num) max_num = a[i];
	}
	tong(max_num);
	for (ll i = 0 ; i < n ; ++i)
		cout << v[a[i]] << "\n";
}

int main() {
	freopen("TONG.INP", "r", stdin);
	freopen("TONG.OUT", "w", stdout);
	fast;
	int tc = 1;
	// cin >> tc;
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
	}
}


