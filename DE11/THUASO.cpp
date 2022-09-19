#pragma GCC optimize("O3")

#include <iostream>
#include <map>

using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

map<int , int> mp;
int n, ans = 0;

bool isPrime (ll n)
{
	if (n <= 3) return n > 1;
	if (n % 2 == 0 || n % 3 == 0) return false;;
	ll i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0) return false;
		i += 6;
	}
	return true;
}

void phantich(int n)
{
	if (isPrime(n)) mp[n]++;
	for (int i = 2 ; i <= n ; ++i)
	{
		while (n % i == 0)
		{
			n /= i;
			mp[i]++;
		}
	}
}


int main()
{
	fast;
	freopen("THUASO.INP", "r", stdin);
	freopen("THUASO.OUT", "w", stdout);
	cin >> n;
	for (int i = 2 ; i <= n ; ++i)
	{
		phantich(i);
	}
	for (auto it : mp)
		ans += it.second - 1;
	cout << ans;
}