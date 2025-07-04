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

void min_and_max_diff(Node *head)
{
  int mn = INT_MAX, mx = INT_MIN;

  while (head)
  {
    mn = min(mn, head->val);
    mx = max(mx, head->val);

    head = head->next;
  }

  cout << mx - mn;
}

int main()
{
  Node *head = NULL, *tail = NULL;

  take_input(head, tail);

  min_and_max_diff(head);

  return 0;
}
