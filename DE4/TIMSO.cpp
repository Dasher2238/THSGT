#pragma GCC target("popcnt")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include <iostream>
#include <sstream>

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

bool isPrime(ll n)
{
	if (n <= 3) return n > 1;
	if (n % 2 == 0 || n % 3 == 0) return false;;
	ll i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0) return false;
		i += 6;
	}
	return true;
}

void solve() {
	freopen("TIMSO.INP", "r", stdin);
	freopen("TIMSO.OUT", "w", stdout);
	string s;
	int n; cin >> n;
	ll m = 2;
	int i = 0;
	while (i < n)
	{
		if (isPrime(m)) {i++; s += to_string(m);}
		m++;
	}
	cout << s;
}

int main() {
	fast;
	freopen("TIMSO.INP", "r", stdin);
	freopen("TIMSO.OUT", "w", stdout);
	int tc = 1;
	// cin >> tc;
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
	}
	// cout << char(1 + 48);
}


