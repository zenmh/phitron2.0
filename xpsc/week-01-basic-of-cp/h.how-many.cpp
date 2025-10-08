#include <bits/stdc++.h>

#define nl '\n';
#define fast() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fast();

  int s, t, cnt = 0;
  cin >> s >> t;

  for (int a = 0; a <= s; a++)
  {
    for (int b = 0; b <= s; b++)
    {
      for (int c = 0; c <= s; c++)
      {
        if (a + b + c <= s && a * b * c <= t)
        {
          cnt++;
        }
      }
    }
  }

  cout << cnt;

  return 0;
}