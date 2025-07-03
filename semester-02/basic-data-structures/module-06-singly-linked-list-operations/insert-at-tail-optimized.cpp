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

void insert_at_tail(SNode *&head, SNode *&tail, int val)
{
  SNode *new_node = new SNode(val);

  if (head)
  {
    tail->next = new_node;
    tail = new_node;
  }
  else
  {
    head = new_node;
    tail = new_node;
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
  SNode *head = new SNode(10), *b = new SNode(20), *tail = new SNode(30);

  head->next = b;
  b->next = tail;

  insert_at_tail(head, tail, 40);
  insert_at_tail(head, tail, 50);

  print_linked_list(head);

  return 0;
}
