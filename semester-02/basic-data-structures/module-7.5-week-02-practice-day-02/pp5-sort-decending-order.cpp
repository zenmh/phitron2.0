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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *new_node = new Node(val);

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

void take_input(Node *&head, Node *&tail)
{
  while (1)
  {
    int val;
    cin >> val;

    if (val == -1)
    {
      break;
    }

    insert_at_tail(head, tail, val);
  }
}

void sort_dsc_order(Node *head)
{
  for (Node *i = head; i->next; i = i->next)
  {
    for (Node *j = i->next; j; j = j->next)
    {
      if (i->val < j->val)
      {
        swap(i->val, j->val);
      }
    }
  }
}

void print_linked_list(Node *head)
{
  while (head)
  {
    cout << head->val << ' ';

    head = head->next;
  }
}

int main()
{
  Node *head = NULL, *tail = NULL;

  take_input(head, tail);

  sort_dsc_order(head);

  print_linked_list(head);

  return 0;
}
