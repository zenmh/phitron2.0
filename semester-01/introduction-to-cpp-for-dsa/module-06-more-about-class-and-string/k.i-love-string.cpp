#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s, t, st;
    cin >> s >> t;

    int s_size = s.size(), t_size = t.size(), range = s_size <= t_size ? s_size : t_size;

    for (int i = 0; i < range; i++)
    {
      st.push_back(s[i]);
      st.push_back(t[i]);
    }

    if (s_size != t_size)
    {
      if (s_size < t_size)
      {
        string tmp(t, s_size);
        st += tmp;
      }
      else if (t_size < s_size)
      {
        string tmp(s, t_size);
        st += tmp;
      }
    }

    cout << st << endl;
  }

  return 0;
}
