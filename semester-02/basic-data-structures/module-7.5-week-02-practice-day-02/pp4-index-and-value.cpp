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

void insert_at_head(Node *&head, int val)
{
  Node *new_node = new Node(val);

  new_node->next = head;
  head = new_node;
}

void insert_at_index(Node *head, int idx, int val)
{
  Node *new_node = new Node(val);

  while (--idx)
  {
    head = head->next;
  }

  new_node->next = head->next;
  head->next = new_node;
}

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

  int q;
  cin >> q;

  int size = sz(head);

  while (q--)
  {
    int idx, val;
    cin >> idx >> val;

    if (idx <= size)
    {
      if (idx == 0)
      {
        insert_at_head(head, val);
      }
      else if (idx == size)
      {
        insert_at_tail(head, tail, val);
      }
      else
      {
        insert_at_index(head, idx, val);
      }

      print_linked_list(head);

      size++;
    }
    else
    {
      cout << "Invalid";
    }

    cout << endl;
  }

  return 0;
}
