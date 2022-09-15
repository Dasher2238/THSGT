#pragma GCC optimize("O2")

#include <iostream>
#include <set>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

int main()
{
	fast;
	freopen("Nhansu.INP", "r", stdin);
	freopen("Nhansu.OUT", "w", stdout);
	set<int> st;
	int N, x; cin >> N;
	while (N--)
	{
		cin >> x;
		st.insert(x);
	}
	for (auto it : st)
		cout << it << " ";
}