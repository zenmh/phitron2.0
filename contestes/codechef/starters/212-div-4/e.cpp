#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void slv()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    int cnt = 0;
    unordered_set<int> us;

    for (int i = 0; i < n; i++)
    {
      if (us.count(v[i]))
      {
        cnt++;
        us.clear();
      }

      us.insert(v[i]);
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