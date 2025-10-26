#include <bits/stdc++.h>

#define nl '\n'
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a, a + n);

  int pos = 1;

  for (int x : a)
  {
    if (x >= pos)
    {
      pos++;
    }
  }

  cout << pos - 1;

  return 0;
}