#include <bits/stdc++.h>

using namespace std;

int dp[30];

int tetranacci(int n)
{
  if (n == 0)
  {
    return 0;
  }
  if (n == 1 || n == 2)
  {
    return 1;
  }
  if (n == 3)
  {
    return 2;
  }

  if (dp[n] != -1)
  {
    return dp[n];
  }

  dp[n] = tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
  return dp[n];
}

int main()
{
  int n;
  cin >> n;

  fill(dp, dp + 30, -1);

  cout << tetranacci(n);

  return 0;
}