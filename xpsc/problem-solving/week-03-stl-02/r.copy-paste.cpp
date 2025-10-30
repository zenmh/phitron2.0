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

    unordered_set<ll> us;
    us.reserve(n);

    for (int i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      us.insert(x);
    }

    cout << us.size() << nl;
  }
}

int main()
{
  fio;
  slv();
  return 0;
}