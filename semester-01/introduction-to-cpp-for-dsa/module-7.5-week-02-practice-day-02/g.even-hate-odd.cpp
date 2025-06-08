#include <iostream>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n;
    cin >> n;

    int a[n], even = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      a[i] % 2 == 0 && even++;
    }

    if (n % 2 != 0)
    {
      cout << -1 << endl;
      continue;
    }

    int diff = (n / 2) - even;

    if (diff < 0)
    {
      diff *= -1;
    }

    cout << diff << endl;
  }

  return 0;
}
