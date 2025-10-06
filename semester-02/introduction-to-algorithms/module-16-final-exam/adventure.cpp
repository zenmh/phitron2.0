#include <bits/stdc++.h>

using namespace std;

int weight[1001], value[1001], dp[1001][1001];

int knapsack(int i, int w)
{
  if (i < 0 || w <= 0)
  {
    return 0;
  }

  if (dp[i][w] != -1)
  {
    return dp[i][w];
  }

  if (weight[i] <= w)
  {
    int option1 = knapsack(i - 1, w - weight[i]) + value[i];
    int option2 = knapsack(i - 1, w);

    dp[i][w] = max(option1, option2);
    return dp[i][w];
  }
  else
  {
    dp[i][w] = knapsack(i - 1, w);
    return dp[i][w];
  }
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, w;
    cin >> n >> w;

    for (int i = 0; i < n; i++)
    {
      cin >> weight[i];
    }

    for (int i = 0; i < n; i++)
    {
      cin >> value[i];
    }

    fill(&dp[0][0], &dp[0][0] + 1001 * 1001, -1);

    cout << knapsack(n - 1, w) << endl;
  }

  return 0;
}