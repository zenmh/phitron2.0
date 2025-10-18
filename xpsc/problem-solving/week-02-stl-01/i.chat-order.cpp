#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int n;
  cin >> n;

  vector<string> v(n);
  set<string> st;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    st.insert(v[i]);
  }

  for (int i = n - 1; i >= 0; i--)
  {
    if (st.count(v[i]))
    {
      cout << v[i] << nl;
      st.erase(v[i]);
    }
  }

  return 0;
}