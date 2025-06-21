#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Size; Complexity O(1)
  vector<int> v1;
  cout << v1.size(); // 0
  v1.push_back(10);
  cout << v1.size(); // 1

  // Max size; Complexity O(1)
  vector<int> v2;
  cout << v2.max_size() << endl; // 2305843009213693951

  // Capacity; Complexity O(1); After hit the allocated capacity double it. As example showed.
  vector<int> v3;
  cout << v3.capacity() << endl; // 0
  v3.push_back(10);
  cout << v3.capacity() << endl; // 1
  v3.push_back(20);
  cout << v3.capacity() << endl; // 2
  v3.push_back(30);
  cout << v3.capacity() << endl; // 4
  v3.push_back(40);
  cout << v3.capacity() << endl; // 4

  // Clear; Clears the vector elements. Do not delete the memory, only clear the value. Complexity O(N)
  vector<int> v4 = {10, 20, 30, 40, 50};
  cout << v4.size() << endl; // 5
  v4.clear();
  cout << v4.size() << endl; // 0

  // Empty O(1)
  vector<int> v5;
  cout << v5.empty() << endl; // 1 == True
  v5.push_back(10);
  cout << v5.empty() << endl; // 0 == False

  // Resize O(K) == Difference between new and current size.
  vector<int> v6 = {10, 20, 30, 40, 50};
  cout << v6.size() << endl; // 5
  v6.resize(10);
  cout << v6.size() << endl; // 10
  // Now v6 = {10, 20, 30, 40, 50, 0, 0, 0, 0, 0};
  v6.resize(12, 100);
  cout << v6.size() << endl; // 12
  // Now v6 = {10, 20, 30, 40, 50, 0, 0, 0, 0, 0, 100, 100};

  return 0;
}
