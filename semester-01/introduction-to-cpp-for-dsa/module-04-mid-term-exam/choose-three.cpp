#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    int n, s;

    cin >> n >> s;

    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        for (int k = j + 1; k < n; k++)
        {
          if (a[i] + a[j] + a[k] == s)
          {
            flag = true;
            break;
          }
        }
      }
    }

    flag ? cout << "YES" : cout << "NO";

    cout << endl;
  }

  return 0;
}
