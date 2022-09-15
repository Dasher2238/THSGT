#include <iostream>
#include <algorithm>

using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

void solve()
{
	int n, x, ucln; cin >> n;
	cin >> x;
	ucln = x;
	for (int i = 1 ; i < n ; ++i)
	{
		cin >> x;
		ucln = __gcd(ucln, x);
	}
	cout << ucln << "\n";
}

int main()
{
	fast;
	freopen("UCLN.INP", "r", stdin);
	freopen("UCLN.OUT", "w", stdout);
	solve();
}