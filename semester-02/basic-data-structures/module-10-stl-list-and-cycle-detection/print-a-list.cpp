#include <bits/stdc++.h>

using namespace std;

int main()
{
  list<int> l = {10, 20, 30, 40, 50};

  for (auto it = l.begin(); it != l.end(); it++)
  {
    cout << *it << ' ';
  }

  cout << endl;

  for (int x : l)
  {
    cout << x << ' ';
  }

  return 0;
}
