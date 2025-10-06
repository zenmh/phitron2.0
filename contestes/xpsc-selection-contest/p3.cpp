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

    stack<char> st;

    while (n--)
    {
      char c;
      cin >> c;

      if (!st.empty() && c == st.top())
      {
        st.pop();
      }
      else
      {
        st.push(c);
      }
    }

    cout << st.size() << '\n';
  }

  return 0;
}