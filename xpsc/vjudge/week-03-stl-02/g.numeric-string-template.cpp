#include <bits/stdc++.h>

#define nl '\n'
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    int m;
    cin >> m;

    while (m--)
    {
      string s;
      cin >> s;

      if (s.size() != n)
      {
        cout << "NO\n";
        continue;
      }

      map<int, char> num_to_char;
      map<char, int> char_to_num;

      for (int i = 0; i < n; i++)
      {
        num_to_char[a[i]] = s[i];
        char_to_num[s[i]] = a[i];
      }

      int flag = 1;

      for (int i = 0; i < n; i++)
      {
        if (num_to_char[a[i]] != s[i] || char_to_num[s[i]] != a[i])
        {
          flag = 0;
          break;
        }
      }

      flag ? cout << "YES\n" : cout << "NO\n";
    }
  }

  return 0;
}