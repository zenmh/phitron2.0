#include <bits/stdc++.h>

using namespace std;

bool palindrome(list<int> l1, list<int> l2)
{
  if (l1.empty())
  {
    return true;
  }

  for (auto i = l1.begin(), j = l2.begin(); i != l1.end(); i++, j++)
  {
    if (*i != *j)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int x;
  list<int> l1, l2;

  while (cin >> x && x != -1)
  {
    l1.push_back(x);
    l2.push_front(x);
  }

  palindrome(l1, l2) ? cout << "YES" : cout << "NO";

  return 0;
}
