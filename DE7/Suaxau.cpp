#pragma GCC optimize("O2")

#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

int main()
{
	fast;
	freopen("Suaxau.INP", "r", stdin);
	freopen("Suaxau.OUT", "w", stdout);
	string s;
	while (getline(cin, s))
	{
		int len = s.size();
		vector<char> vt;
		for (int i = 0 ; i < len ; ++i)
		{
			if (s[i] != '#') vt.push_back(s[i]);
			else if (vt.size() > 0) vt.pop_back();
		}
		for (auto it : vt)
		{
			cout << it;
		}
	}
}