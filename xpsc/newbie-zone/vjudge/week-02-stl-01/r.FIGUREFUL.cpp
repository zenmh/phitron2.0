#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int n;
  cin >> n;

  map<pair<int, int>, string> m;

  while (n--)
  {
    int a, b;
    string c;
    cin >> a >> b >> c;

    m[{a, b}] = c;
  }

  int t;
  cin >> t;

  while (t--)
  {
    int a, b;
    cin >> a >> b;

    cout << m[{a, b}] << nl;
  }

  return 0;
}