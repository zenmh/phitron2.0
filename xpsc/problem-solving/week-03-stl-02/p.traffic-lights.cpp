#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void slv()
{
  int x, n;
  cin >> x >> n;

  set<int> s;
  multiset<int> ms;

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    s.insert(a);

    int right, left;

    if (s.upper_bound(a) == s.end())
    {
      right = x - a;
    }
    else
    {
      right = *s.upper_bound(a) - a;
    }

    ms.insert(right);

    auto it = s.lower_bound(a);

    if (it == s.begin())
    {
      left = a;
    }
    else
    {
      left = a - *(--it);
    }

    ms.insert(left);

    if (!(s.lower_bound(a) == s.begin() && s.upper_bound(a) == s.end()))
    {
      if (s.lower_bound(a) == s.begin() && s.upper_bound(a) != s.end())
      {
        ms.erase(ms.find(*s.upper_bound(a)));
      }
      else if (s.lower_bound(a) != s.begin() && s.upper_bound(a) == s.end())
      {
        ms.erase(ms.find(x - *(--s.lower_bound(a))));
      }
      else
      {
        ms.erase(ms.find(*s.upper_bound(a) - *(--s.lower_bound(a))));
      }
    }

    cout << *ms.rbegin() << ' ';
  }
}

int main()
{
  fio;
  slv();
  return 0;
}