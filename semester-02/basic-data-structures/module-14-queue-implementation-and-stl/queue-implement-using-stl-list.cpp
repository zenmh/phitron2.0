#include <bits/stdc++.h>

using namespace std;

class MyQueue
{
public:
  list<int> l;

  void push(int x)
  {
    l.push_back(x);
  }

  void pop()
  {
    l.pop_front();
  }

  int fornt()
  {
    return l.front();
  }

  int back()
  {
    return l.back();
  }

  int size()
  {
    return l.size();
  }

  bool empty()
  {
    return l.empty();
  }
};

int main()
{
  int n;
  cin >> n;

  MyQueue q;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  while (!q.empty())
  {
    cout << q.fornt() << ' ';
    q.pop();
  }

  return 0;
}
