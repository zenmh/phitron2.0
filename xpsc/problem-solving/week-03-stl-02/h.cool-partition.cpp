#include <bits/stdc++.h>

#define nl '\n'
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

    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    set<int> s1, s2;
    s1.insert(a[0]);

    int ans = 1;

    for (int i = 1; i < n; i++)
    {
      if (s1.count(a[i]))
      {
        s1.erase(a[i]);
      }

      s2.insert(a[i]);

      if (s1.empty())
      {
        ans++;
        s1 = s2;
        s2.clear();
      }
    }

    cout << ans << nl;
  }

  return 0;
}