#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  string s;
  cin >> s;

  stack<char> st;

  for (char c : s)
  {
    if (!st.empty() && c == '<')
    {
      st.pop();
    }
    else
    {
      st.push(c);
    }
  }

  string ans;

  while (!st.empty())
  {
    ans += st.top();
    st.pop();
  }

  reverse(ans.begin(), ans.end());

  cout << ans;

  return 0;
}