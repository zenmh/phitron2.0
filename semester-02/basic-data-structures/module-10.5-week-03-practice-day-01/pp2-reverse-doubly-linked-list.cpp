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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *new_node = new Node(val);

  if (head && tail)
  {
    tail->next = new_node;
    new_node->prev = tail;
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
    else
    {
      insert_at_tail(head, tail, val);
    }
  }
}

void reverse_doubly_linked_list(Node *&head, Node *&tail)
{
  for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
  {
    swap(i->val, j->val);
  }
}

void print_doublu_linked_list(Node *head)
{
  if (!head)
  {
    return;
  }

  cout << head->val << ' ';

  print_doublu_linked_list(head->next);
}

int main()
{
  Node *head = NULL, *tail = NULL;

  take_input(head, tail);

  reverse_doubly_linked_list(head, tail);

  print_doublu_linked_list(head);

  return 0;
}
