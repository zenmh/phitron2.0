#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  char c;
  int cnt[26] = {0};

  for (int i = 0; i < n; i++)
  {
    cin >> c;
    cnt[c - 'a']++;
  }

  for (int i = 0; i < 26; i++)
  {
    while (cnt[i]--)
    {
      cout << char(i + 'a');
    }
  }

  return 0;
}
