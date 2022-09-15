#pragma GCC optimize("O2")

#include <iostream>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

int main()
{
	fast;
	freopen("SCORE.INP", "r", stdin);
	freopen("SCORE.OUT", "w", stdout);
	int ans[5] = {2, 4, 1, 3, 0};
	int n, score; cin >> n;
	while (n--)
	{
		int a[5];
		int pos = 0;
		cin >> a[1] >> a[2] >> a[3] >> a[4];
		score = 0 ;
		for (int i = 1 ; i <= 4 ; ++i)
		{
			if (a[i] == ans[pos]) {score++; pos++;}
			else {i -= 1;}
		}
		cout << score << "\n";
	}
}