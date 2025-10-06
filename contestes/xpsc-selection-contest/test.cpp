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

    string s = "";

    char v[5] = {'a', 'e', 'i', 'o', 'u'};
    int i = 0;

    while (n--)
    {
      s += v[i];
      if (i == 4)
      {
        i = 0;
      }
      else
      {
        i++;
      }
    }

    cout << s << '\n';
  }

  return 0;
}