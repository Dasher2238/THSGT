#pragma GCC optimize("O3")

#include <iostream>
#include <map>

using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

int main()
{
	fast;
	freopen("KYTHI.INP", "r", stdin);
	freopen("KYTHI.OUT", "w", stdout);
	ll n, x, y, z, min1 = INT32_MAX, pos, dp[101]; cin >> n;
	for (int i = 0 ; i <= n ; ++i)
		dp[i] = 0;
	while (cin >> x >> y >> z)
	{
		dp[x] += z;
		dp[y] += z;
	}
	for (int i = n; i >= 1 ; --i)
		if (dp[i] < min1) {min1 = dp[i]; pos = i;}
	cout << pos << "\n" << min1;
}