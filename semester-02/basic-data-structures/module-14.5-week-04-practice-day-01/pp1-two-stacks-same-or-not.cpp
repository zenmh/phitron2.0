#include <bits/stdc++.h>

using namespace std;

class MyStack
{
public:
  list<int> l;

  void push(int x)
  {
    l.push_back(x);
  }

  int top()
  {
    return l.back();
  }

  void pop()
  {
    l.pop_front();
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
  MyStack s1, s2;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    s1.push(x);
  }

  int m;
  cin >> m;

  if (n != m)
  {
    cout << "NO";
    return 0;
  }

  while (m--)
  {
    int x;
    cin >> x;
    s2.push(x);
  }

  while (n--)
  {
    if (s1.top() != s2.top())
    {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}
