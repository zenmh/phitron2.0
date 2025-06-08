#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s("hello world");

  for (char c : s) // h e l l o   w o r l d
  {
    cout << c << ' ';
  }

  cout << endl;

  int a[5] = {10, 20, 40, 50, 30};

  for (int x : a) // 10 20 40 50 30
  {
    cout << x << ' ';
  }

  return 0;
}
