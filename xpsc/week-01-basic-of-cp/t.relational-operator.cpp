#include <bits/stdc++.h>

#define nl '\n';
#define fast() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;
using ll = long long;

int main()
{
  fast();

  int t;
  cin >> t;

  while (t--)
  {
    ll a, b;
    cin >> a >> b;

    if (a < b)
    {
      cout << "<\n";
    }
    else if (a > b)
    {
      cout << ">\n";
    }
    else
    {
      cout << "=\n";
    }
  }

  return 0;
}