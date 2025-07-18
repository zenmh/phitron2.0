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

void sll_reverse(Node *&head, Node *&tail, Node *tmp)
{
  // base case
  if (!tmp->next)
  {
    head = tmp;
    return;
  }
  // call recursion
  sll_reverse(head, tail, tmp->next);

  // action
  tmp->next->next = tmp;
  tmp->next = NULL;
  tail = tmp;
}

void prnt(Node *head)
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

  sll_reverse(head, tail, head);

  prnt(head);

  return 0;
}
