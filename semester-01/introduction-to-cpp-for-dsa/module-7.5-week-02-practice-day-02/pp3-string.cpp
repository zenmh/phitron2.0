#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s, x, w;
  getline(cin, s);
  cin >> x;

  stringstream ss(s);
  int count = 0;

  while (ss >> w)
  {
    x == w &&count++;
  }

  cout << count;

  return 0;
}
