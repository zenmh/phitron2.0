#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Way 1
  int n1;
  cin >> n1;
  vector<int> v1(n1);

  for (int i = 0; i < n1; i++)
  {
    cin >> v1[i];
  }

  for (int x : v1)
  {
    cout << x << ' ';
  }

  // Way 2
  int n2;
  cin >> n2;
  vector<int> v2;

  for (int i = 0; i < n2; i++)
  {
    int x;
    cin >> x;
    v2.push_back(x);
  }

  for (int x : v2)
  {
    cout << x << ' ';
  }

  return 0;
}
