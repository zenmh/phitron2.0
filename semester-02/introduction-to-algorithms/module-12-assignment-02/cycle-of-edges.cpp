#include <bits/stdc++.h>

using namespace std;

int ldr[100001], gs[100001];

int find(int n)
{
  if (ldr[n] == -1)
  {
    return n;
  }

  int l = find(ldr[n]);

  ldr[n] = l;

  return l;
}

void dsu(int n1, int n2)
{
  int l1 = find(n1), l2 = find(n2);

  if (gs[l1] > gs[l2])
  {
    ldr[l2] = l1;
    gs[l1] += gs[l2];
  }
  else
  {
    ldr[l1] = l2;
    gs[l2] += gs[l1];
  }
}

int main()
{
  memset(ldr, -1, sizeof(ldr));
  memset(gs, 1, sizeof(gs));

  int n, e;
  cin >> n >> e;

  int cnt = 0;

  while (e--)
  {
    int a, b;
    cin >> a >> b;

    int la = find(a), lb = find(b);

    if (la == lb)
    {
      cnt++;
    }
    else
    {
      dsu(a, b);
    }
  }

  cout << cnt;

  return 0;
}
