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

int count(Node *head)
{
  int cnt = 0;

  while (head)
  {
    cnt++;
    head = head->next;
  }

  return cnt;
}

int main()
{
  Node *head = new Node(2), *a = new Node(1), *b = new Node(5), *c = new Node(3), *d = new Node(4), *e = new Node(8), *tail = new Node(9);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = tail;

  cout << count(head);

  return 0;
}
