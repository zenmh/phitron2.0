#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    string a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    ll ans = 0;

    ll cnt_1st[11] = {0}, cnt_2nd[11] = {0};
    vector<vector<ll>> cnt_pair(11, vector<ll>(11, 0));

    for (auto &s : a)
    {
      int x = s[0] - 'a';
      int y = s[1] - 'a';

      ans += (cnt_1st[x] - cnt_pair[x][y]);
      ans += (cnt_2nd[y] - cnt_pair[x][y]);

      cnt_1st[x]++;
      cnt_2nd[y]++;
      cnt_pair[x][y]++;
    }

    cout << ans << nl;
  }

  return 0;
}