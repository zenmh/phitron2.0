#include <bits/stdc++.h>

using namespace std;

int leader[101], group_size[101];

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

  if (group_size[leader1] >= group_size[leader2])
  {
    leader[leader2] = leader1;
    group_size[leader1] += group_size[leader2];
  }
  else
  {
    leader[leader1] = leader2;
    group_size[leader2] += group_size[leader1];
  }
}

int main()
{
  fill(leader, leader + 101, -1);
  fill(group_size, group_size + 101, 1);

  dsu_union(1, 2);
  dsu_union(2, 0);
  dsu_union(3, 1);

  for (int i = 0; i < 6; i++)
  {
    cout << i << " --> leader --> " << leader[i] << endl;
  }

  return 0;
}
