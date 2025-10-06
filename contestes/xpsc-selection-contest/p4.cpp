#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  cin >> n >> q;

  vector<int> a(n + 1);

  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  while (q--)
  {
    int l, r;
    cin >> l >> r;

    set<int> s(a.begin() + l, a.begin() + ++r);

    int min_val = 0;

    while (s.count(min_val))
    {
      min_val++;
    }

    cout << min_val << '\n';
  }

  return 0;
}