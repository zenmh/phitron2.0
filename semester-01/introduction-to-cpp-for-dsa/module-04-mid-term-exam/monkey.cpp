#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n = 1000001;
  char s[n];

  while (cin.getline(s, n))
  {
    int cnt[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
      if (s[i] >= 'a' && s[i] <= 'z')
      {
        int idx = s[i] - 'a';
        cnt[idx]++;
      }
    }

    for (int i = 0; i < 26; i++)
    {
      while (cnt[i]--)
      {
        cout << char('a' + i);
      }
    }

    cout << endl;
  }

  return 0;
}
