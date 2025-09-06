#include <bits/stdc++.h>

using namespace std;

int leader[101], gs[101];

int find(int node)
{
  if (leader[node] == -1)
  {
    return node;
  }

  int ldr = find(leader[node]);

  leader[node] = ldr;

  return ldr;
}

void dsu_union(int node1, int node2)
{
  int leader1 = find(node1), leader2 = find(node2);

  if (gs[leader1] > gs[leader2])
  {
    leader[leader2] = leader1;
    gs[leader1] += gs[leader2];
  }
  else
  {
    leader[leader1] = leader2;
    gs[leader2] += gs[leader1];
  }
}

int main()
{
  fill(leader, leader + 101, -1);
  fill(gs, gs + 101, 1);

  int n, e;
  cin >> n >> e;

  int cycle = 0;

  while (e--)
  {
    int a, b;
    cin >> a >> b;

    int leader_a = find(a), leader_b = find(b);

    if (leader_a == leader_b)
    {
      cycle = 1;
    }
    else
    {
      dsu_union(a, b);
    }
  }

  cycle ? cout << "Cycle Detected" : cout << "No Cycle";

  return 0;
}
