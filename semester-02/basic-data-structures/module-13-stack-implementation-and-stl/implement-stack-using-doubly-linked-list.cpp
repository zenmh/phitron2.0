#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int val;
  Node *prev, *next;

  Node(int val)
  {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};

class MyStack
{
public:
  int sz = 0;
  Node *head = NULL, *tail = NULL;

  void push(int x)
  {
    sz++;

    Node *new_node = new Node(x);

    if (head)
    {
      new_node->prev = tail;
      tail->next = new_node;
      tail = new_node;
      return;
    }

    head = new_node;
    tail = new_node;
  }

  void pop()
  {
    sz--;

    Node *del_node = tail;

    tail = tail->prev;
    delete del_node;

    if (!tail)
    {
      head = NULL;
      return;
    }

    tail->next = NULL;
  }

  int top()
  {
    return tail->val;
  }

  int size()
  {
    return sz;
  }

  bool empty()
  {
    return !head;
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
