#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};

  cout << v[0] << endl            // 1
       << v.front() << endl       // 1
       << v.at(2) << endl         // 3
       << v[2] << endl            // 3
       << v[v.size() - 1] << endl // 5
       << v.back() << endl;       // 5

  return 0;
}
