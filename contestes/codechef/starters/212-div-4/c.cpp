#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void slv()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    deque<int> dq(n);

    for (int i = 0; i < n; i++)
    {
      cin >> dq[i];
    }

    int cnt = 0;

    while (!dq.empty())
    {
      int mx = dq.size(), idx = find(dq.begin(), dq.end(), mx) - dq.begin();

      int l = idx, r = dq.size() - idx - 1;

      cnt += min(l, r);
      dq.erase(dq.begin() + idx);
    }

    cout << cnt << nl;
  }
}

int main()
{
  fio;
  slv();
  return 0;
}
