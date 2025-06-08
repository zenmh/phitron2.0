#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s = "Hello";

  cout << s[1];    // e
  cout << s.at(1); // e

  cout << s.front(); // H
  cout << s[0];      // H

  cout << s.back();        // o
  cout << s[s.size() - 1]; // o

  return 0;
}
