#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    string s, x;
    cin >> s >> x;

    for (int i = 0; s[i] != '\0'; i++)
    {
      if (s[i] == x[0])
      {
        bool flag = true;
        int x_size = x.size();
        for (int j = i, k = 0; k < x_size; j++, k++)
        {
          if (s[j] != x[k])
          {
            flag = false;
          }
        }

        if (flag)
        {
          s.replace(i, x_size, "#");
        }
      }
    }

    cout << s << endl;
  }

  return 0;
}
