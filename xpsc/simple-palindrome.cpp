#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    char c[5] = {'a', 'e', 'i', 'o', 'u'};

    int i = 0;
    string s;

    while (n--)
    {
      s += c[i];
      i++;

      if (i == 5)
      {
        i = 0;
      }
    }

    sort(s.begin(), s.end());

    cout << s << '\n';
  }

  return 0;
}