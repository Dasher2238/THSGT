#pragma GCC target("popcnt")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include <iostream>
using namespace std;

#define ll long long
#define LIM (int)1e6
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

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

bool isPan (ll n)
{
	int now = 0, tmp = n;
	while (tmp > 0)
	{
		now = now * 10 + tmp % 10;
		tmp /= 10;
	}
	return now == n;
}

void solve()
{
	int a, b, ans = 0; cin >> a >> b;
	for (int i = a ; i <= b ; ++i)
		if (isPrime(i) && isPan(i))
			ans++;
	cout << ans << "\n";
}

int main()
{
	fast;
	freopen("PRIME.INP", "r", stdin);
	freopen("PRIME.OUT", "w", stdout);
	solve();
}