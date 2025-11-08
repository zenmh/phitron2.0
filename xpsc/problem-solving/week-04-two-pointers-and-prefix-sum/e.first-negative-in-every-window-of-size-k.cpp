#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

// This problem is not same as GeeksForGeeks. Cause, they maintain only implementation based solution.

void slv()
{
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int k;
  cin >> k;

  int l = 0, r = 0;
  vector<int> ans;
  queue<int> q;

  while (r < n)
  {
    if (a[r] < 0)
    {
      q.push(a[r]);
    }

    if (r - l + 1 == k)
    {
      if (q.empty())
      {
        ans.push_back(0);
      }
      else
      {
        ans.push_back(q.front());

        if (q.front() == a[l])
        {
          q.pop();
        }
      }

      l++;
    }

    r++;
  }

  for (int x : ans)
  {
    cout << x << ' ';
  }
}

int main()
{
  fio;
  slv();
  return 0;
}