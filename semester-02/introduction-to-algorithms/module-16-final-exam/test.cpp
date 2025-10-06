#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;

  int flag = 1;

  if (s1.size() != s2.size())
  {
    flag = 0;
  }
  else
  {
    int cnt1[26] = {0}, cnt2[26] = {0} ;

    for (int i = 0; i < sz; i++)
    {
      cnt1[s1[i] - 'a']++;
      cnt2[s2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
      if (cnt1[i] != cnt2[i])
      {
        flag = 0;
      }
    }
  }

  flag ? cout << "YES" : cout << "NO";

  return 0;
}