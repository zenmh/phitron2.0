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
    string s;
    cin >> n >> s;

    int cnt0 = 0, cnt1 = 0;

    for (int i = 0; i < n - 1; i++)
    {
      if (s[i] == '0' && s[i + 1] == '0')
      {
        cnt0++;
      }
      else if (s[i] == '1' && s[i + 1] == '1')
      {
        cnt1++;
      }
    }

    cout << max(0, (cnt0 - cnt1 + 1) / 2) << nl;
  }
}

int main()
{
  fio;
  slv();
  return 0;
}