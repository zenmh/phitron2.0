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

  void pop()
  {
    l.pop_back();
  }

  int top()
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

  MyStack st;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  while (!st.empty())
  {
    cout << st.top() << endl;
    st.pop();
  }

  return 0;
}
