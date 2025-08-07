#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int val;
  Node *next;

  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

class MyQueue
{
public:
  int sz = 0;
  Node *head = NULL, *tail = NULL;

  void push(int x)
  {
    sz++;
    Node *new_node = new Node(x);

    if (tail)
    {
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
    Node *del_node = head;

    head = head->next;

    if (!head)
    {
      tail = NULL;
    }

    delete del_node;
  }

  int fornt()
  {
    return head->val;
  }

  int back()
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
