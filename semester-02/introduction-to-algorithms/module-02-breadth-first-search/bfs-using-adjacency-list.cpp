#include <bits/stdc++.h>

using namespace std;

int visited[1001] = {0};
vector<vector<int>> adj_list(1001);

void bfs(int src)
{
  queue<int> q;
  q.push(src);
  visited[src] = 1;

  while (!q.empty())
  {
    // Step 01: front node ke ber kore ana
    int parent = q.front();
    q.pop();

    // Step 02: oi node ke niye jabotio kaj kora
    cout << parent << ' ';

    // Step 03: child gula push kora
    for (int child : adj_list[parent])
    {
      if (!visited[child])
      {
        q.push(child);
        visited[child] = 1;
      }
    }
  }
}

int main()
{
  int n, e;
  cin >> n >> e;

  while (e--)
  {
    int a, b;
    cin >> a >> b;

    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }

  bfs(0);

  return 0;
}
