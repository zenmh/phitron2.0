#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int q;
  cin >> q;

  map<string, string> db, tmp;

  while (q--)
  {
    string old_handle, new_handle;
    cin >> old_handle >> new_handle;

    if (tmp.count(old_handle))
    {
      db[tmp[old_handle]] = new_handle;
      tmp[new_handle] = tmp[old_handle];
      tmp.erase(old_handle);
      continue;
    }

    db[old_handle] = new_handle;
    tmp[new_handle] = old_handle;
  }

  cout << db.size() << nl;

  for (auto [key, val] : db)
  {
    cout << key << ' ' << val << nl;
  }

  return 0;
}