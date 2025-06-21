#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t = 1, test;
  cin >> test;
  for (t = 1; t <= test; t++)
  {
    int n;
    cin >> n;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    if (n % 2 != 0)
    {
      cout << -1 << endl;
      continue;
    }
    int count1 = 0, count2 = 0;
    for (i = 0; i < n; i++)
    {
      (arr[i] % 2 == 0) ? count1++ : count2++;
    }
    int x = abs(n / 2 - count2);
    cout << x << endl;
  }
  return 0;
}
