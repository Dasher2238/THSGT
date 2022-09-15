#include <iostream>
#include <map>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve() {
	string a, b; cin >> a >> b;
	int ans = 0 ;
	int lena = a.size(), lenb = b.size();
	map<char, int> mpa;
	for (auto it : a)
		mpa[it]++;
	for (int i = 0 ; i < lenb ; ++i)
	{
		if (i + lena - 1 < lenb) {
			map<char, int> mpb;
			for (int j = i ; j <= i + lena - 1 ; ++j)
				mpb[b[j]]++;
			if (mpa == mpb) ans++;
		}
	}
	cout << ans << "\n";
}

int main() {
	fast;
	freopen("XAU.INP", "r", stdin);
	freopen("XAU.OUT", "w", stdout);
	int tc = 1;
	// cin >> tc;
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
	}
}


