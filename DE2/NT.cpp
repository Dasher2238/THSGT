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

bool isPrime (ll n)
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

int main() {
	freopen("NT.INP", "r", stdin);
	freopen("NT.OUT", "w", stdout);
	ll n; cin >> n;
	ll sum = 0;
	for (int i = 2 ; i < n ; ++i)
	{
		if (isPrime(i)) {cout << i << " "; sum += i;}
	}
	cout << "\n" << sum;
	// if (isPrime(35)) cout << 1;
	// isPrime(5);
}


