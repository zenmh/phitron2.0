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

bool is_asc_order(Node *head)
{
  while (head->next)
  {
    if (head->val > head->next->val)
    {
      return false;
    }

    head = head->next;
  }

  return true;
}

int main()
{
  Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(400), *d = new Node(50), *tail = new Node(70);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = tail;

  is_asc_order(head) ? cout << "YES" : cout << "NO";

  return 0;
}
