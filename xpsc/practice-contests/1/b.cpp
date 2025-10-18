#include <bits/stdc++.h>

#define nl '\n';
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int a, b, c;
  cin >> a >> b >> c;

  cout << min(min(a, b), c);

  return 0;
}