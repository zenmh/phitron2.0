#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;

  cin >> s;

  int count[26] = {0};

  for (char c : s)
  {
    if (c >= 'A' && c <= 'Z')
    {
      c += 32;
    }

    if (c == 'e' || c == 'g' || c == 'y' || c == 'p' || c == 't')
    {
      int idx = c - 'a';
      count[idx]++;
    }
  }

  int result = INT_MAX;

  for (int i = 0; i < 26; i++)
  {
    if (count[i])
    {
      result = min(result, count[i]);
    }
  }

  cout << result;

  return 0;
}
