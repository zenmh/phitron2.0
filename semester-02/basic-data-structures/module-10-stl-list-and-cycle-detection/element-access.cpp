#include <bits/stdc++.h>

using namespace std;

int main()
{
  list<int> l = {10, 20, 30, 40, 50};

  // First element O(1)
  cout << l.front() << endl;  // 10
  cout << *l.begin() << endl; // 10

  // Last element O(1)
  cout << l.back() << endl; // 50

  // I'th element O(N)
  cout << *next(l.begin(), 2) << endl; // 30

  return 0;
}
