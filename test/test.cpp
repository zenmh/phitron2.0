#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<string> s = {"flower", "flow", "flight"};

  int min_size = INT_MAX;

  for (string x : s)
  {
    int sz = x.size();
    min_size = min(min_size, sz);
  }

  string tmp = s[0].substr(0, min_size), ans;

  for (int i = 0; i < min_size; i++)
  {
    bool flag = true;

    for (string x : s)
    {
      if (tmp[i] != x[i])
      {
        flag = false;
      }
    }

    if (flag)
    {
      ans.push_back(tmp[i]);
    };
  }

  cout << ans;

  return 0;
}
