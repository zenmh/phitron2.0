#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    string s;
    cin >> s;

    stack<char> st;

    for (char c : s)
    {
      if (c == '0')
      {
        if (!st.empty() && st.top() == '1')
        {
          st.pop();
        }
        else
        {
          st.push(c);
        }
      }
      else
      {
        if (!st.empty() && st.top() == '0')
        {
          st.pop();
        }
        else
        {
          st.push(c);
        }
      }
    }

    st.empty() ? cout << "YES" << endl : cout << "NO" << endl;
  }

  return 0;
}
