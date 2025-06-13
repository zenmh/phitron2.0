#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  long long ab = pow(a, b), cd = pow(c, d);
  cout << ab << ' ' << cd;
  ab > cd ? cout << "YES" : cout << "NO";

  return 0;
}
