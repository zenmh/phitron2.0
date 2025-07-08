#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Assign O(N)
  list<int> l1 = {10, 20, 30, 40, 50}, l2, l3;
  l2 = l1;                         // 10, 20, 30, 40, 50
  l3.assign(l1.begin(), l1.end()); // 10, 20, 30, 40, 50

  // Push O(1)
  list<int> l4 = {10, 20, 30, 40, 50};
  l4.push_front(100); // 100 10 20 30 40 50
  l4.push_back(500);  // 100 10 20 30 40 50 500

  // Pop O(1)
  list<int> l5 = {10, 20, 30, 40, 50};
  l5.pop_front(); // 20 30 40 50
  l5.pop_back();  // 20 30 40

  // Insert O(N+K)
  list<int> l6 = {10, 20, 30, 40, 50}, l7 = {111, 777};
  l6.insert(next(l6.begin(), 2), 100);                  // 10 20 100 30 40 50
  l6.insert(next(l6.begin(), 3), l7.begin(), l7.end()); // 10 20 100 111 777 30 40 50

  // Erase O(N+K)
  list<int> l8 = {10, 20, 30, 40, 50};
  l8.erase(next(l8.begin(), 2));                      // 10 20 40 50
  l8.erase(next(l8.begin(), 1), next(l8.begin(), 3)); // 10 50

  // Replace
  list<int> l9 = {10, 20, 30, 20, 20, 40, 50};
  replace(l9.begin(), l9.end(), 20, 200); // 10 200 30 200 200 40 50

  // Find
  list<int> l10 = {10, 20, 30, 40, 50};
  auto find_50 = find(l10.begin(), l10.end(), 50);   // Found
  auto find_500 = find(l10.begin(), l10.end(), 500); // Not Found

  find_50 != l10.end() ? cout << "Found" : cout << "Not Found";
  cout << endl;
  find_500 != l10.end() ? cout << "Found" : cout << "Not Found";

  return 0;
}
