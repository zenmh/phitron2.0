#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s = "Hi, I'm Mehedi Hasan", word;
  stringstream ss(s);

  while (ss >> word) // Hi, I'm Mehedi Hasan
  {
    cout << word << ' ';
  }

  return 0;
}
