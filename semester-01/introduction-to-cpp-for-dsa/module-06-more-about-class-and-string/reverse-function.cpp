#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a[5] = {10, 20, 30, 40, 50};

  reverse(a, a + 5);

  for (int x : a) // 50 40 30 20 10
  {
    cout << x << ' ';
  }

  cout << endl;

  string s("hello");

  reverse(s.begin(), s.end());

  for (char c : s) // olleh
  {
    cout << c;
  }

  return 0;
}
