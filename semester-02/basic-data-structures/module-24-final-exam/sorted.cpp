#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n;
    cin >> n;

    set<int> s;

    while (n--)
    {
      int x;
      cin >> x;
      s.insert(x);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
      cout << *it << ' ';
    }

    cout << endl;
  }

  return 0;
}
