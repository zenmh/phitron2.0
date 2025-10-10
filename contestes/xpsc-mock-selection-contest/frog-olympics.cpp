#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int ln = n, jn = n, lf = 0, jf = 0;

    while (ln >= 0)
    {
      if (ln == 0)
      {
        lf = 1;
        break;
      }

      if (ln % 2)
      {
        ln -= 3;
      }
      else
      {
        ln /= 4;
      }
    }

    while (jn >= 0)
    {
      if (jn == 0)
      {
        jf = 1;
        break;
      }

      if (jn % 3)
      {
        jn -= 3;
      }
      else
      {
        jn /= 3;
      }

      if (jn % 5)
      {
        jn -= 5;
      }
      else
      {
        jn /= 5;
      }
    }

    if (lf && jf)
    {
      cout << "Both\n";
    }
    else if (lf && !jf)
    {
      cout << "Leapy\n";
    }
    else if (!lf && jf)
    {
      cout << "Jumpster\n";
    }
    else
    {
      cout << "None\n";
    }
  }

  return 0;
}