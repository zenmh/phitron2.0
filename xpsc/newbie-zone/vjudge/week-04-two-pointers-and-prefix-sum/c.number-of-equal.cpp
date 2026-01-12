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

  ll ans = 0;
  int i = 0, j = 0;

  while (i < n && j < m)
  {
    int curr = a[i], cnt1 = 0, cnt2 = 0;

    while (i < n && a[i] == curr)
    {
      i++, cnt1++;
    }

    while (j < m && curr > b[j])
    {
      j++;
    }

    while (j < m && b[j] == curr)
    {
      j++, cnt2++;
    }

    ans += (1LL * cnt1 * cnt2);
  }

  cout << ans;
}

int main()
{
  fio;
  slv();
  return 0;
}