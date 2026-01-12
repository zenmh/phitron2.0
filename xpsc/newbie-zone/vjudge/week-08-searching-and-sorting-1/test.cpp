// Btw, i copyed and submitted this problem as demo. I didn't solved it.

/* ---------------------------------------------------------
Hi there, I'm here.
Btw, I'm Mehedi Hasan from Bangladesh. Let's get connected.
LinkedIn & CP: zenmh
--------------------------------------------------------- */

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define zenmh ios::sync_with_stdio(false), cin.tie(nullptr)
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
/*
- find_by_order(k): iterator to k-th element (0-indexed)
- order_of_key(x): count of elements strictly less than x
*/

void run()
{
  int n;
  cin >> n;

  set<int> rooms;
  deque<pair<pair<int, int>, int>> guests;

  for (int i = 1; i <= n; i++)
  {
    int start, end;
    cin >> start >> end;
    rooms.insert(i);
    guests.push_back({{start, end}, i});
  }

  sort(all(guests));

  int ans[n + 2], cnt = 0;
  set<pair<int, int>> end_days;

  while (!guests.empty())
  {
    auto [time, i] = guests.front();
    auto [start, end] = time;

    if (end_days.size() && end_days.begin()->first < start)
    {
      rooms.insert(end_days.begin()->second);
      end_days.erase(end_days.begin());
    }
    else
    {
      int room = *rooms.begin();
      rooms.erase(rooms.begin());
      ans[i] = room;
      end_days.insert({end, room});
      guests.pop_front();
    }

    cnt = max(cnt, (int)end_days.size());
  }

  cout << cnt << nl;

  for (int i = 1; i <= n; i++)
  {
    cout << ans[i] << ' ';
  }

  cout << nl;
}

int main()
{
  zenmh;
  run();
  return 0;
}