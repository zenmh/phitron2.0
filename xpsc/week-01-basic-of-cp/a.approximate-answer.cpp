#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, y, k;
  cin >> x >> y >> k;

  abs(x - y) <= k ? cout << "Yes" : cout << "No";

  return 0;
}