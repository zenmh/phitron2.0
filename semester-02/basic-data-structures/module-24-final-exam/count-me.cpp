#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;
  cin.ignore();

  while (tc--)
  {
    string s;
    getline(cin, s);

    if (s == "")
    {
      continue;
    }

    stringstream ss(s);
    string w;

    map<string, int> m;
    pair<string, int> p = {"null", 0};

    while (ss >> w)
    {
      m[w]++;

      if (!p.second || p.second < m[w])
      {
        p = {w, m[w]};
      }
    }

    cout << p.first << ' ' << p.second << endl;
  }

  return 0;
}
