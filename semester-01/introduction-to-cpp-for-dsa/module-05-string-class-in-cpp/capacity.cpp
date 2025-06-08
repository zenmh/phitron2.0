#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s = "Hello String";

  cout << s.size(); // 12

  cout << s.max_size(); // 9223372036854775806 around 10^5 or 10^6

  cout << s.capacity(); // 15

  s.clear(); // make the string empty

  s.resize(20);
  cout << s; // Hello String\0\0\0\0

  s.resize(20, 'x');
  cout << s; // Hello Stringxxxxxxxx

  return 0;
}
