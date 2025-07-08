#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Way 1
  list<int> l1 = {10, 20, 30, 40, 50}; // 10 20 30 40 50

  // Way 2
  list<int> l2(5, 7); // 7 7 7 7 7

  // Way 3
  int a[5] = {10, 20, 30, 40, 50};
  list<int> l3(a, a + 5); // 10 20 30 40 50

  // Way 4
  vector<int> v = {10, 20, 30, 40, 50};
  list<int> l4(v.begin(), v.end()); // 10 20 30 40 50

  // Way 5
  list<int> l5 = {10, 20, 30, 40, 50};
  list<int> l6(l5); // 10 20 30 40 50

  return 0;
}
