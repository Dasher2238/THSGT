#pragma GCC optimize("O2")

#include <iostream>
#include <math.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

ll dem_uoc(ll n)
{
	ll ans = 0;
	for (ll i = 1 ; i <= sqrt(n) ; ++i)
	{
		if (n % i == 0)
		{
			if (i * i == n) ans++;
			else ans += 2;
		}
	}
	return ans;
}

int main()
{
	fast;
	freopen("CHIAQUA.INP", "r", stdin);
	freopen("CHIAQUA.OUT", "w", stdout);
	ll n; cin >> n;
	cout << dem_uoc(n);
}