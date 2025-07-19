#include <bits/stdc++.h>

using namespace std;

class MyStack
{
public:
  vector<int> v;

  void push(int x)
  {
    v.push_back(x);
  }

  void pop()
  {
    v.pop_back();
  }

  int top()
  {
    return v.back();
  }

  int size()
  {
    return v.size();
  }

  bool empty()
  {
    return v.empty();
  }
};

int main()
{
  MyStack s;

  s.push(10);
  s.push(20);
  s.push(30);

  if (!s.empty())
  {
    cout << s.top() << endl;
  }

  if (!s.empty())
  {
    s.pop();
  }

  if (!s.empty())
  {
    cout << s.top() << endl;
  }

  if (!s.empty())
  {
    s.pop();
  }

  if (!s.empty())
  {
    cout << s.top() << endl;
  }

  if (!s.empty())
  {
    s.pop();
  }

  return 0;
}
