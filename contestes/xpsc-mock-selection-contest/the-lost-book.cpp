#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int t;
  cin >> t;

  for (int i = 0; i < n; i++)
  {
    if (a[i] == t)
    {
      cout << i;
      return 0;
    }
  }

  cout << -1;

  return 0;
}