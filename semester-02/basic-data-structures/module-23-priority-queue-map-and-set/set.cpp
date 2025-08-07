#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n; // 10
  cin >> n;

  set<int> s; // 100 20 30 60 20 10 40 70 30 10

  while (n--) // O(NlogN)
  {
    int x;
    cin >> x;
    s.insert(x); // O(logN)
  }

  // It removes all duplicate values and keep it in asc order.

  for (auto it = s.begin(); it != s.end(); it++) // 10 20 30 40 60 70 100
  {
    cout << *it << ' ';
  }

  // Check has the value in set or not.

  if (s.count(40)) // 1 == true and 0 == false
  {
    cout << "Has";
  }
  else
  {
    cout << "Hasn't";
  }

  return 0;
}
