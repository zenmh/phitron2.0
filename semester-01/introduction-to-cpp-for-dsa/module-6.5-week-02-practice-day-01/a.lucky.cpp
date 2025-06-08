#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    string s;
    cin >> s;

    if (int(s[0] - '0') + int(s[1] - '0') + int(s[2] - '0') == int(s[3] - '0') + int(s[4] - '0') + int(s[5] - '0'))
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }

  return 0;
}
