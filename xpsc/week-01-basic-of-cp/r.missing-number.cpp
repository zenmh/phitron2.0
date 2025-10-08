#include <bits/stdc++.h>

#define nl '\n';
#define fast() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fast();

  int n;
  cin >> n;

  n++;

  int a[n];
  fill(a, a + n, 0);

  for (int i = 1; i < n; i++)
  {
    int x;
    cin >> x;
    a[x]++;
  }

  for (int i = 1; i <= n; i++)
  {
    if (!a[i])
    {
      cout << i;
      break;
    }
  }

  return 0;
}