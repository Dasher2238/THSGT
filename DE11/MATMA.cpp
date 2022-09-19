#pragma GCC optimize("O3")

#include <iostream>
#include <map>

using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);



int main()
{
	fast;
	freopen("MATMA.INP", "r", stdin);
	freopen("MATMA.OUT", "w", stdout);
	char x;
	map<char, int> mp;
	while (cin >> x)
		mp[x]++;
	for (auto it : mp)
		if (it.second <= 9)
			cout << it.second;
}