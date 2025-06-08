#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n;

    cin >> n;

    int a[n];

    cin >> a[0];

    if (a[0] == 1)
    {
      a[0]++;
    }

    cout << a[0] << ' ';

    for (int i = 1; i < n; i++)
    {
      cin >> a[i];

      if (a[i] == 1)
      {
        a[i]++;
      }

      if (a[i] % a[i - 1] == 0)
      {
        a[i]++;
      }

      cout << a[i] << ' ';
    }

    cout << endl;
  }

  return 0;
}
