#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  cin >> n;

  while (n)
  {
    if (n % 10 == 7)
    {
      cout << "Lucky";
      return 0;
    }

    n /= 10;
  }

  cout << "Not Lucky";

  return 0;
}