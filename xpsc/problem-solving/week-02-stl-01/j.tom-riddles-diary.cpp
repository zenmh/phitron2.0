#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  set<string> st;

  int n;
  cin >> n;

  while (n--)
  {
    string s;
    cin >> s;

    if (st.count(s))
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
      st.insert(s);
    }
  }

  return 0;
}