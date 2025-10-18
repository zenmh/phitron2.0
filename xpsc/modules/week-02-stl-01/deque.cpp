#include <bits/stdc++.h>

#define nl '\n';
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  /*
  It's similer to vector. But, it has some feature. Just like insert and remove at fornt and back in O(1).
  Drawback is, it uses double memory compared to vector.
  */

  deque<int> dq = {10, 20, 30, 40, 50};

  // Those all does in O(1).
  dq.push_front(5);
  dq.push_back(55);
  dq.pop_front();
  dq.pop_back();
  dq.front();
  dq.back();

  return 0;
}