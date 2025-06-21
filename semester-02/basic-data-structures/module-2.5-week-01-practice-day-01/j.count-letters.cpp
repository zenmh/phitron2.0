#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;

  vector<int> count(26, 0);

  for (char c : s)
  {
    count[c - 'a']++;
  }

  for (int i = 0; i < 26; i++)
  {
    count[i] && cout << char(i + 'a') << " : " << count[i] << endl;
  }

  return 0;
}
