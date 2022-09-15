#pragma GCC target("popcnt")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include <iostream>
#include <map>
using namespace std;

#define ll long long
#define LIM (int)1e6
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

void solve()
{
	char n;
	bool check = false;
	map<char, int> mp;
	while (cin >> n)
		mp[toupper(n)]++;
	for (auto it : mp)
		if (it.first != ' ' && it.second == 1)
		{
			check = true;
			cout << it.first << "\n";
		}
	if (!check) cout << -1 << "\n";
}

int main()
{
	fast;
	freopen("TACHCHU.INP", "r", stdin);
	freopen("TACHCHU.OUT", "w", stdout);
	solve();
}