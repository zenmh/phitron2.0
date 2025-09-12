#include <bits/stdc++.h>

using namespace std;

int fibo(int n)
{
  if (n == 0 | n == 1)
  {
    return n;
  }

  int f = fibo(n - 1) + fibo(n - 2);

  return f;
}

int main()
{
  int fi = fibo(5);

  cout << fi;

  return 0;
}