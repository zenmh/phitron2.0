#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;

  cin >> s;

  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
    {
      s.replace(i, 5, " ");
    }
  }

  cout << s;

  return 0;
}
