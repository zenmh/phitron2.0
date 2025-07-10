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

int sz(Node *head)
{
  int cnt = 0;

  while (head)
  {
    cnt++;
    head = head->next;
  }

  return cnt;
}

bool same_to_same(Node *head1, Node *head2)
{
  if (sz(head1) != sz(head2))
  {
    return false;
  }

  for (Node *i = head1, *j = head2; i && j; i = i->next, j = j->next)
  {
    if (i->val != j->val)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  Node *head1 = NULL, *tail1 = NULL, *head2 = NULL, *tail2 = NULL;

  take_input(head1, tail1);
  take_input(head2, tail2);

  same_to_same(head1, head2) ? cout << "YES" : cout << "NO";

  return 0;
}
