#include <bits/stdc++.h>

using namespace std;

int main()
{
  // input
  // 10
  // Hello String

  int x;
  string s;

  cin >> x;

  cin.ignore();

  getline(cin, s);

  cout << x << endl
       << s;

  // output
  // 10
  // Hello String

  return 0;
}
