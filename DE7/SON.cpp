#pragma GCC optimize("O2")

#include <iostream>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

long N, M, a[10], c = 0;
bool b[10];

void In()
{
	for (int i = 0 ; i < M ; ++i)
		cout << a[i] << " ";
	cout << "\n";
	c++;
}

void Try(int i)
{
	if (i == M) In();
	for (int j = 1 ; j <= N; ++j)
	{
		if (i < M && b[j])
		{
			a[i] = j;
			b[j] = false;
			Try(i + 1);
			b[j] = true;
		}
	}
}

int main()
{
	fast;
	freopen("SON.INP", "r", stdin);
	freopen("SON.OUT", "w", stdout);
	cin >> N >> M;
	for (int i = 0 ; i <= 10 ; ++i)
		b[i] = true;
	Try(0);
	cout << c;
}