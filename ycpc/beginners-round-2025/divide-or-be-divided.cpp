#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, x, y;
  string s;
  cin >> n >> x >> y >> s;

  int a = (int)s[x - 1] - '0', b = (int)s[y - 1] - '0';

  if ((b && a % b == 0) || (a && b % a == 0))
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return 0;
}
