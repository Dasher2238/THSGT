#pragma GCC optimize("O2")

#include <iostream>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

int main()
{
	fast;
	freopen("TONG.INP", "r", stdin);
	freopen("TONG.OUT", "w", stdout);
	ll n; cin >> n;
	cout << ((2 * n - 1 - 1) / 2 + 1)*(2 * n - 1 + 1) / 2;
}