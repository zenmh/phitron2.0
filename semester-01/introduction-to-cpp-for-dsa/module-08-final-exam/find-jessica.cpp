#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  getline(cin, s);

  stringstream ss(s);
  string word;
  bool flag = false;
  while (ss >> word)
  {
    if (word == "Jessica")
    {
      flag = true;
      break;
    }
  }

  flag ? cout << "YES" : cout << "NO";

  return 0;
}
