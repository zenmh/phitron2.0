#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (int i = 0, j = n - 1; i < j; i++, j--)
  {
    swap(v[i], v[j]);
  }

  for (auto x : v)
  {
    cout << x << ' ';
  }

  return 0;
}
