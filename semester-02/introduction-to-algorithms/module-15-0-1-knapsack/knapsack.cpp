#include <bits/stdc++.h>

using namespace std;

int value[101], weight[101];

int knapsack(int i, int max_weight)
{
  if (i < 0 || max_weight <= 0) // base case
  {
    return 0;
  }

  if (weight[i] <= max_weight) // if have option to pick or not
  {
    int option1 = knapsack(i - 1, max_weight - weight[i]) + value[i];
    int option2 = knapsack(i - 1, max_weight);

    return max(option1, option2);
  }
  else // if only one option to avoid
  {
    return knapsack(i - 1, max_weight);
  }
}

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> value[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> weight[i];
  }

  int max_weight;
  cin >> max_weight;

  cout << knapsack(n - 1, max_weight);

  return 0;
}