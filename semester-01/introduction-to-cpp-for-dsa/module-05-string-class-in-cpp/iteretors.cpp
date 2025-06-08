#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s = "Hello";

  cout << *s.begin();     // H
  cout << *s.end();       // \0
  cout << *(s.end() - 1); // o

  for (auto it = s.begin(); it < s.end(); it++) // H e l l o
  {
    cout << *it << ' ';
  }

  return 0;
}
