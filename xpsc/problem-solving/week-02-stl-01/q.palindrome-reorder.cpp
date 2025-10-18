#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  string s;
  cin >> s;

  int cnt[26] = {0};

  for (char c : s)
  {
    cnt[c - 'A']++;
  }

  int odd = 0;
  char odd_char;

  for (int i = 0; i < 26; i++)
  {
    if (cnt[i] % 2)
    {
      odd++;
      odd_char = char(i + 'A');
    }
  }

  if (odd > 1)
  {
    cout << "NO SOLUTION";
  }
  else
  {
    string ans;

    for (int i = 0; i < 26; i++)
    {
      if (cnt[i])
      {
        ans.resize(ans.size() + cnt[i] / 2, i + 'A');
      }
    }

    cout << ans;

    reverse(ans.begin(), ans.end());

    odd &&cout << odd_char;
    cout << ans;
  }

  return 0;
}