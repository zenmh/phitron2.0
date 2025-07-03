#include <bits/stdc++.h>

using namespace std;

void fun(vector<int> &a, int n)
{
  for (int i = 1; i < n; i++)
  {
    a[i] += a[i - 1];
  }
}

int main()
{
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  fun(a, n);

  for (int x : a)
  {
    cout << x << ' ';
  }

  return 0;
}
