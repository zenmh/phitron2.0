#include <bits/stdc++.h>

using namespace std;

long long pw(int x, int n)
{
  long long ans = x;

  if (n % 2)
  {
    n -= 2;
  }

  for (int i = 1; i < n; i++)
  {
    ans *= x;
  }

  return ans;
}

long long sum(int x, int n)
{
  long long sm = 0;

  for (int i = 2; i <= n; i += 2)
  {
    sm += pw(x, i);
  }

  return sm;
}

int main()
{
  int x, n;
  cin >> x >> n;

  cout << sum(x, n);

  return 0;
}
