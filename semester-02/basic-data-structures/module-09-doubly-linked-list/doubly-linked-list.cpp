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

void print_forward(Node *head)
{
  while (head)
  {
    cout << head->val << ' ';
    head = head->next;
  }
}

void print_backward(Node *tail)
{
  while (tail)
  {
    cout << tail->val << ' ';
    tail = tail->prev;
  }
}

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

  print_forward(head);

  cout << endl;

  print_backward(tail);

  return 0;
}
