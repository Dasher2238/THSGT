#pragma GCC optimize("O3")

#include <iostream>

using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

int main()
{
	fast;
	freopen("DAYTANG.INP", "r", stdin);
	freopen("DAYTANG.OUT", "w", stdout);
	int LIM = 6 * (int)1e4 + 6;
	int n, a[LIM], dp[LIM], max1 = 0; cin >> n;
	a[0] = 0;
	dp[0] = 0;
	for (int i = 1 ; i <= n ; ++i)
	{
		cin >> a[i];
		if (a[i] > a[i - 1]) {dp[i] = dp[i - 1] + 1; max1 = max(max1, dp[i]);}
		else {dp[i] = 1; max1 = max(max1, dp[i]);}
	}
	cout << max1;
}