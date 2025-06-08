#include <bits/stdc++.h>

using namespace std;

int main()
{

  // 1st way
  string s("Hello World");
  cout << s; // Hello World

  // 2nd way
  string s("Hello World", 4);
  cout << s; // Hell

  // 3rd way
  string s1 = "Hello World";
  string s2(s1, 4);
  cout << s2; // o World

  // 4th way
  string s(5, 'X');
  cout << s; // XXXXX

  return 0;
}
