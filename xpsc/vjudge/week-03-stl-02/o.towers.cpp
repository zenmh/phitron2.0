#include <bits/stdc++.h>

#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int n;
  cin >> n;

  int k[n];

  multiset<int> ms;

  while (n--)
  {
    int x;
    cin >> x;

    auto it = ms.upper_bound(x);

    if (it != ms.end())
    {
      ms.erase(it);
    }

    ms.insert(x);
  }

  cout << ms.size();

  return 0;
}