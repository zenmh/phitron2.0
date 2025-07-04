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

void remove_duplicate(Node *head)
{
  for (Node *i = head; i; i = i->next)
  {
    Node *prev = i, *curr = i->next;

    while (curr)
    {
      if (i->val == curr->val)
      {
        Node *del_node = curr;

        prev->next = curr->next;
        curr = curr->next;

        delete del_node;
      }
      else
      {
        prev = curr;
        curr = curr->next;
      }
    }
  }
}

void print_linked_list(Node *head)
{
  if (!head)
  {
    return;
  }

  cout << head->val << ' ';

  print_linked_list(head->next);
}

int main()
{
  Node *head = NULL, *tail = NULL;

  take_input(head, tail);

  remove_duplicate(head);

  print_linked_list(head);

  return 0;
}
