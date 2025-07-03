#include <bits/stdc++.h>

using namespace std;

class SNode
{
public:
  int val;
  SNode *next;

  SNode(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void insert_at_any_position(SNode *head, int idx, int val)
{
  SNode *new_node = new SNode(val);

  if (head)
  {
    SNode *tmp = head;

    for (int i = 0; i < idx; i++)
    {
      tmp = tmp->next;
    }

    new_node->next = tmp->next;
    tmp->next = new_node;
  }
  else
  {
    head = new_node;
  }
}

void print_linked_list(SNode *head)
{
  while (head)
  {
    cout << head->val << ' ';
    head = head->next;
  }
}

int main()
{
  SNode *head = new SNode(10), *b = new SNode(20), *c = new SNode(30), *d = new SNode(40), *tail = new SNode(50);

  head->next = b;
  b->next = c;
  c->next = d;
  d->next = tail;

  insert_at_any_position(head, 2, 200);

  print_linked_list(head);

  return 0;
}
