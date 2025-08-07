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
  Node *head = NULL, *tail = NULL;

  void push(int x)
  {
    Node *new_node = new Node(x);

    if (tail)
    {
      tail->next = new_node;
      new_node->prev = tail;
      tail = new_node;
      return;
    }

    head = new_node;
    tail = new_node;
  }

  void pop()
  {
    Node *del_node = tail;

    tail = tail->prev;

    if (tail)
    {
      tail->next = NULL;
      return;
    }

    head = NULL;

    delete del_node;
  }

  int top()
  {
    return tail->val;
  }

  bool empty()
  {
    return !head;
  }
};

class MyQueue
{
public:
  Node *head = NULL, *tail = NULL;

  void push(int x)
  {
    Node *new_node = new Node(x);

    if (tail)
    {
      tail->next = new_node;
      new_node->prev = tail;
      tail = new_node;
      return;
    }

    head = new_node;
    tail = new_node;
  }

  void pop()
  {
    Node *del_node = head;

    head = head->next;

    if (head)
    {
      head->prev = NULL;
      return;
    }

    tail = NULL;

    delete del_node;
  }

  int front()
  {
    return head->val;
  }

  bool empty()
  {
    return !head;
  }
};

int main()
{
  int n, m;
  cin >> n >> m;

  if (n != m)
  {
    cout << "NO";
    return 0;
  }

  MyStack s;

  while (n--)
  {
    int x;
    cin >> x;
    s.push(x);
  }

  MyQueue q;

  while (m--)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  while (!s.empty())
  {
    if (s.top() != q.front())
    {
      cout << "NO";
      return 0;
    }
    s.pop();
    q.pop();
  }

  cout << "YES";

  return 0;
}
