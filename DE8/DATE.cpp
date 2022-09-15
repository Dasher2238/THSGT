#pragma GCC optimize("O2")

#include <iostream>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

int d, m, y, t;
bool nam_nhuan = false, thang_31 = false, thang_30 = false;
int main()
{
	fast;
	freopen("DATE.INP", "r", stdin);
	freopen("DATE.OUT", "w", stdout);
	cin >> t;
	while (t--)
	{
		cin >> d >> m >> y;
		nam_nhuan = false, thang_31 = false, thang_30 = false;
		if (y % 4 == 0 && y % 100 != 0) nam_nhuan = true; // check nam
		if (m > 12) {cout << "FALSE" << "\n"; continue;} // check thang
		else if (m <= 12)
		{
			if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
				thang_31 = true;
			else
				thang_30 = true;
		}
		if (thang_31)
		{
			if (d <= 31) {cout << "TRUE" << "\n"; continue;}
			else {cout << "FALSE" << "\n"; continue;}
		}
		else if (thang_30)
		{
			if (m == 2)
			{
				if (nam_nhuan && d <= 29) cout << "TRUE" << "\n";
				else if (!nam_nhuan && d <= 28) cout << "TRUE" << "\n";
				else cout << "FALSE" << "\n";
			}
			else if (d <= 30)
				cout << "TRUE" << "\n";
			else
				cout << "NO" << "\n";
		}
	}
}