#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      ll sum = 0;
      for (int k = i; k <= j; k++)
      {
        sum += a[k];
      }
    }
  }

  return 0;
}