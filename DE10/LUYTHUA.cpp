#pragma GCC optimize("O2")

#include <iostream>
#include <math.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

bool check(int n)
{
	return n == 0 || n == 5 || n == 1 || n == 6;
}

bool check1(int n)
{
	return n == 2 || n == 4 || n == 8;
}

int main()
{
	fast;
	freopen("LUYTHUA.INP", "r", stdin);
	freopen("LUYTHUA.OUT", "w", stdout);
	ll a, b; cin >> a >> b;
	ll final_num = a % 10;
	if (check(final_num))
		cout << final_num << "\n";
	else
	{
		if (check1(final_num))
		{
			ll c = b;
			while (c % 4 != 0)
				c--;
			b -= c;
			ll num = pow(final_num, b) * 6;
			cout << num % 10;
		}
		else
		{
			ll c = b;
			while (c % 4 != 0)
				c--;
			b -= c;
			ll num = pow(final_num, b) * 1;
			cout << num % 10;
		}
	}
}