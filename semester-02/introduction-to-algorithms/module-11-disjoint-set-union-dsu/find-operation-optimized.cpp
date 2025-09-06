#include <bits/stdc++.h>

using namespace std;

int leader[101] = {-1};

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

int main()
{
  leader[0] = 1;
  leader[1] = -1;
  leader[2] = 1;
  leader[3] = 1;
  leader[4] = 5;
  leader[5] = 3;

  cout << find(4);

  return 0;
}
