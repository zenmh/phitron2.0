#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  bool flag = false;

  for (int i = 1; i < n; i++)
  {
    if (a[i - 1] == a[i])
    {
      flag = true;
    }
  }

  flag ? cout << "YES" : cout << "NO";

  return 0;
}
