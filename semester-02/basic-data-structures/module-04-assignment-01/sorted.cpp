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

    vector<int> a(n);
    bool flag = true;

    cin >> a[0];

    for (int i = 1; i < n; i++)
    {
      cin >> a[i];

      if (a[i - 1] > a[i])
      {
        flag = false;
      }
    }

    flag ? cout << "YES" << endl : cout << "NO" << endl;
  }

  return 0;
}
