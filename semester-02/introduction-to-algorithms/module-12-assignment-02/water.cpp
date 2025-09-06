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

    int h[n];

    pair<int, int> h1 = {0, 0}, h2 = {0, 0};

    for (int i = 0; i < n; i++)
    {
      cin >> h[i];

      if (h[i] >= h1.second)
      {
        h1 = {i, h[i]};
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (h[i] >= h2.second && h[i] != h1.second)
      {
        h2 = {i, h[i]};
      }
    }

    h1.first < h2.first ? cout << h1.first << ' ' << h2.first << endl : cout << h2.first << ' ' << h1.first << endl;
  }

  return 0;
}
