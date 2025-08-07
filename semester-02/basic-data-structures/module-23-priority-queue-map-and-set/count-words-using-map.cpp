#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  stringstream ss(s);
  string w;

  map<string, int> m;

  while (ss >> w)
  {
    m[w]++;
  }

  for (auto it = m.begin(); it != m.end(); it++)
  {
    cout << it->first << " = " << it->second << endl;
  }

  return 0;
}
