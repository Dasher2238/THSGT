#pragma GCC optimize("O2")

#include <iostream>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

int main()
{
	fast;
	freopen("CUAHANG.INP", "r", stdin);
	freopen("CUAHANG.OUT", "w", stdout);
	ll N; cin >> N;
	ll tong = 0, max1 = (int) - 1e4 - 5, x, count = -1;
	// cout << max1;
	for (ll i = 0 ; i < N ; ++i)
	{
		cin >> x;
		tong += x;
		if (x > max1) {max1 = x; count = i + 1;}
	}
	cout << tong << "\n" << count;
}