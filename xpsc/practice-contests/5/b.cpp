#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n;
  cin >> n;

  int s[n], flag = 1;

  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
    if (s[i] <= 4)
    {
      flag = 0;
    }
  }

  flag ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
  zenmh;

  int t;
  cin >> t;

  while (t--)
  {
    run();
  }

  return 0;
}