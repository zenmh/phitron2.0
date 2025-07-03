#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int first_half_mid_space = n - 2;

  for (int i = 0; i < n / 2; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << ' ';
    }
    cout << '\\';
    for (int j = 0; j < first_half_mid_space; j++)
    {
      cout << ' ';
    }
    cout << '/' << endl;
    first_half_mid_space -= 2;
  }

  for (int i = 0; i < n / 2; i++)
  {
    cout << ' ';
  }

  cout << 'X' << endl;

  int last_half_mid_space = 1, last_half_first_space = (n / 2) - 1;

  for (int i = n; i > (n / 2) + 1; i--)
  {
    for (int j = 0; j < last_half_first_space; j++)
    {
      cout << ' ';
    }
    cout << '/';
    for (int j = 0; j < last_half_mid_space; j++)
    {
      cout << ' ';
    }
    cout << '\\' << endl;
    last_half_mid_space += 2;
    last_half_first_space--;
  }

  return 0;
}
