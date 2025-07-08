#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Size
  list<int> l1 = {10, 20, 30, 40, 50};
  cout << l1.size(); // 5

  // Max Size
  list<int> l2 = {10, 20, 30, 40, 50};
  cout << l2.max_size(); // 384307168202282325 (vary on device)

  // Clear
  list<int> l3 = {10, 20, 30, 40, 50};
  cout << l3.size(); // 5
  l3.clear();
  cout << l3.size(); // 0

  // Is Empty
  list<int> l4 = {10, 20, 30, 40, 50}, l5;
  cout << l4.empty(); // 0 == false
  cout << l5.empty(); // 1 == true

  // Resize
  list<int> l6 = {10, 20, 30}; // 10 20 30
  l6.resize(5);                // 10 20 30 0 0
  l6.resize(6, 100);           // 10 20 30 0 0 100

  return 0;
}
