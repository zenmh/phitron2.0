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

int main()
{
  Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *tail = new Node(50);

  head->next = a;

  a->prev = head;
  a->next = b;

  b->prev = a;
  b->next = c;

  c->prev = b;
  c->next = tail;

  tail->prev = c;

  return 0;
}
