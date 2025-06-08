#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a[26] = {0};

    for (char c : s)
    {
      int i = c - 'A';
      if (a[i] == 0)
      {
        a[i] += 2;
      }
      else
      {
        a[i]++;
      }
    }

    int cnt = 0;

    for (int x : a)
    {
      cnt += x;
    }

    cout << cnt << endl;
  }

  return 0;
}
