#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x;
  cin >> n >> x;

  int a[101];
  fill(a, a + 101, -1);

  int cnt = 0;

  while (n--)
  {
    int y;
    cin >> y;
    a[y] = y;

    if (x == y)
    {
      cnt++;
    }
  }

  for (int i = 0; i < x; i++)
  {
    if (a[i] == -1)
    {
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}