#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void slv()
{
  int n, m;
  cin >> n >> m;

  int a[n], b[m];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }

  int i = 0, j = 0, cnt = 0;

  while (j < m)
  {
    if (i < n && a[i] < b[j])
    {
      i++, cnt++;
    }
    else
    {
      j++;
      cout << cnt << ' ';
    }
  }
}

int main()
{
  fio;
  slv();
  return 0;
}