#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int n;
  cin >> n;

  set<string> st;
  map<string, int> m;

  while (n--)
  {
    string s;
    cin >> s;

    if (st.count(s))
    {
      int ext = m[s]++;
      cout << s << ext << nl;
    }
    else
    {
      st.insert(s);
      m[s] = 1;
      cout << "OK\n";
    }
  }

  return 0;
}