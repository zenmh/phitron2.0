#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 1; i <= 10; i++)
  {
    string s;
    cin >> s;

    if (i % 2)
    {
      cout << s << '\n';
    }
  }

  return 0;
}