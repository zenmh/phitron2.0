#include <bits/stdc++.h>

using namespace std;

int fac(int n)
{
  if (n == 1)
  {
    return 1;
  }

  return fac(n - 1) * n;
}

int main()
{
  cout << fac(5);

  return 0;
}