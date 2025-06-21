#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> v1; // O(1)

  int n2 = 5;
  vector<int> v2(n2); // O(N)

  int n3 = 5;
  vector<int> v3(n3, 5); // O(N)

  vector<int> v4 = {10, 20, 30, 40, 50};
  vector<int> v5(v4); // O(N)

  int n6 = 5, a6[n6] = {10, 20, 30, 40, 50};
  vector<int> v6(a6, a6 + n6); // O(N)

  return 0;
}
