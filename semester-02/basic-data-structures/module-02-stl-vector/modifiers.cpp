#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Assign. Complexity O(N)
  vector<int> v1 = {1, 2, 3, 4, 5};
  vector<int> v2 = v1; // v2 = {1, 2, 3, 4, 5}

  // Push back. Complexity O(1)
  vector<int> v4 = {1, 2, 3, 4, 5};
  v4.push_back(100); // v4 = {1, 2, 3, 4, 5, 100}

  // Pop back. Complexity O(1)
  vector<int> v5 = {1, 2, 3, 4, 5};
  v5.pop_back(); // v5 = {1, 2, 3, 4}

  // Insert. Complexity O(N+K) [where K is the number of elements to be inserted]
  vector<int> v6 = {1, 2, 3, 4, 5}, v7 = {100, 200, 300};
  v6.insert(v6.begin() + 2, v7.begin(), v7.end()); // v6 = {1, 100, 200, 300, 3, 4, 5}
  v6.insert(v6.begin() + 2, 1000);                 // v6 = {1, 2, 1000, 100, 200, 300, 3, 4, 5}

  // Erase. Complexity O(N+K) [where K is the number of elements to be inserted]
  vector<int> v8 = {1, 2, 3, 4, 5};
  v8.erase(v8.begin() + 2);               // v8 = {1, 2, 4, 5}
  v8.erase(v8.begin() + 1, v8.end() - 1); // v8 = {1, 5};

  // Replace. Complexity O(N)
  vector<int> v9 = {1, 2, 3, 4, 5, 2, 5, 2};
  replace(v9.begin(), v9.end(), 2, 200); // v9 ={1, 200, 3, 4, 5, 200, 5, 200}

  // Find. Complexity O(N)
  vector<int> v10 = {1, 2, 3, 4, 5};
  vector<int>::iterator it1 = find(v10.begin(), v10.end(), 3); // longcut
  auto it2 = find(v10.begin(), v10.end(), 3);                  // shortcut
  it2 == v10.end() ? cout << "Not Found" : cout << "Found";
  cout << *it2; // 3

  return 0;
}
