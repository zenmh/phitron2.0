#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n;
  cin >> n;

  // Beginner approach
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << ' ';
    }
  }

  cout << nl;

  // Optimized approach
  vector<int> divisors1;

  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      divisors1.push_back(i);

      if ((n / i) != i)
      {
        divisors1.push_back(n / i);
      }
    }
  }

  sort(divisors1.begin(), divisors1.end());

  for (int divisor : divisors1)
  {
    cout << divisor << ' ';
  }

  cout << nl;

  // More perfect -> Cause sqrt function can return some +- fraction value.
  vector<int> divisors2;

  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      divisors2.push_back(i);

      if ((n / i) != i)
      {
        divisors2.push_back(n / i);
      }
    }
  }

  sort(divisors2.begin(), divisors2.end());

  for (int divisor : divisors2)
  {
    cout << divisor << ' ';
  }
}

int main()
{
  zenmh;
  run();
  return 0;
}