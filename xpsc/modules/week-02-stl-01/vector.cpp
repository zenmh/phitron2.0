#include <bits/stdc++.h>

#define nl '\n';
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int n = 5;

  // Initializing
  vector<int> v1;
  vector<int> v2(n);
  vector<int> v3(n, -1); // -1, -1, -1, -1, -1
  vector<int> v4;        // -1, -1, -1, -1, -1
  v4.assign(n, -1);

  // Iterator
  vector<int> v5 = {10, 20, 30, 40, 50};
  cout << *v5.begin();        // 10
  cout << *--v5.rend();       // 10
  cout << *v5.rbegin();       // 50;
  cout << *--v5.end();        // 50
  cout << *(v5.begin() + 2);  // 30
  cout << *(v5.rend() - 2);   // 20
  cout << *(v5.rbegin() + 1); // 40;

  vector<int> v6 = {10, 50, 20, 10, 30, 50};

  sort(v6.begin(), v6.end());                 // 10 10 20 30 50 50
  sort(v6.begin(), v6.begin() + 3);           // 10 20 50 10 30 50
  sort(v6.rbegin(), v6.rend());               // 50 50 30 20 10 10
  sort(v6.begin(), v6.end(), greater<int>()); // 50 50 30 20 10 10

  vector<int> v7 = {8, 2, 1, 3, 9, 1, 4, 9, 5, 7};

  auto min_element_pointer = min_element(v7.begin(), v7.end());
  auto max_element_pointer = max_element(v7.begin(), v7.end());
  int mn_element = *min_element(v7.begin(), v7.end()); // 1
  int mx_element = *max_element(v7.begin(), v7.end()); // 1

  // Element position
  int min_elem_pos = min_element(v7.begin(), v7.end()) - v7.begin(); // 2
  int max_elem_pos = max_element(v7.begin(), v7.end()) - v7.begin(); // 4
  max_elem_pos++;                                                    // 5

  return 0;
}