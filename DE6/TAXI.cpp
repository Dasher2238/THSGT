#pragma GCC optimize("O2")
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);
int main()
{
	fast;
	freopen("TAXI.INP", "r", stdin);
	freopen("TAXI.OUT", "w", stdout);
	int n, x, ans = 0;
	vector<int> c(5, 0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		c[x]++;
	}

	ans += c[4];
	if (c[3] >= c[1]) {
		ans += c[1];
		c[3] -= c[1];
		ans += c[3];
		c[1] = 0;
	}
	else if (c[3] < c[1]) {
		ans += c[3];
		c[1] -= c[3];
		c[3] = 0;
	}
	ans += c[2] / 2;
	c[2] = (c[2] % 2 == 1);
	ans += ((c[1] + c[2]) / 4 + (c[1] + c[2] % 4 != 0));
	cout << ans;
	return 0;
}