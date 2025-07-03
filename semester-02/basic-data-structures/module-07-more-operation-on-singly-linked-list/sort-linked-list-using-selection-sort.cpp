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

void prnt(Node *head)
{
  while (head)
  {
    cout << head->val << ' ';
    head = head->next;
  }
}

void sort_linked_list(Node *head)
{
  for (Node *i = head; i->next; i = i->next)
  {
    for (Node *j = i->next; j; j = j->next)
    {
      if (i->val > j->val)
      {
        swap(i->val, j->val);
      }
    }
  }
}

int main()
{
  Node *head = NULL, *tail = NULL;

  take_input(head, tail);

  sort_linked_list(head);

  prnt(head);

  return 0;
}
