#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Remove O(N)
  list<int> l1 = {10, 20, 30, 10, 10};
  l1.remove(10); // 20 30

  // Sort O(NlogN) [default sort function doesn't work for list]
  list<int> l2 = {10, 20, 10, 30, 10, 20};
  l2.sort();               // 10 10 10 20 20 30
  l2.sort(greater<int>()); // 30 20 20 10 10 10

  // Unique O(N) with sort O(NlogN)
  list<int> l3 = {10, 20, 10, 10, 30};
  l3.unique(); // 10 20 10 30
  l3.sort();
  l3.unique(); // 10 20 30

  // Reverse O(N)
  list<int> l4 = {10, 20, 30, 40, 50};
  l4.reverse(); // 50 40 30 20 10

  return 0;
}
