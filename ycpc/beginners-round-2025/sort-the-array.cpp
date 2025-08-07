#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n;
    cin >> n;

    vector<int> v(n), v2;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    int cnt = 0;

    if (v[0])
    {
      cnt++;
    }

    for (int i = 1; i < n; i++)
    {
      if (v[i] && !v[i - 1])
      {
        cnt++;
      }
    }

    cout << cnt - 1 << endl;
  }

  return 0;
}
