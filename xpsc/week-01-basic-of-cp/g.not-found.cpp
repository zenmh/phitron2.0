#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  int cnt[26] = {0};

  for (char c : s)
  {
    cnt[c - 'a']++;
  }

  for (int i = 0; i < 26; i++)
  {
    if (cnt[i] == 0)
    {
      cout << char(i + 'a');
      return 0;
    }
  }

  cout << "None";

  return 0;
}