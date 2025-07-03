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

void insert_at_head(SNode *&head, int val)
{
  SNode *new_node = new SNode(val);

  new_node->next = head;
  head = new_node;
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

  insert_at_head(head, 100);
  insert_at_head(head, 200);
  insert_at_head(head, 300);

  print_linked_list(head);

  return 0;
}
