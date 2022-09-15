#include <iostream>
using namespace std;

int main()
{
  freopen("DOANCON.INP", "r", stdin);
  freopen("DOANCON.OUT", "w", stdout);
  int n, dp[(int)1e5 + 6], max_ = 0, x; cin >> n;
  cin >> x;
  dp[1] = x;
  for (int i = 2 ; i <= n; ++i)
  {
    cin >> x;
    dp[i] = dp[i - 1] + x;
  }
  for (int i = 1 ; i <= n; ++i)
  {
    for (int j = i ; j <= n; ++j)
    {
      if (dp[j] - dp[i - 1] >= 0)
        max_ = max(max_, j - (i - 1));
    }
  }
  cout << max_ << "\n";
}