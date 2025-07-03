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

void print_middle_element(Node *head, int n)
{
  if (n % 2)
  {
    n = n / 2;
  }
  else
  {
    n = (n / 2) - 1;
  }

  for (int i = 0; i < n; i++)
  {
    head = head->next;
  }

  if (n % 2)
  {
    cout << head->val;
  }
  else
  {
    cout << head->val << ' ' << head->next->val;
  }
}

int main()
{
  Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *d = new Node(50), *tail = new Node(70);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = tail;

  int n = count(head);

  print_middle_element(head, n);

  return 0;
}
