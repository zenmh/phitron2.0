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

void delete_at_head(Node *&head, Node *&tail)
{
  Node *del_node = head;

  head = head->next;

  if (head)
  {
    head->prev = NULL;
  }
  else
  {
    tail = NULL;
  }

  delete del_node;
}

void delete_at_tail(Node *&head, Node *&tail)
{
  Node *del_node = tail;

  tail = tail->prev;

  if (tail)
  {
    tail->next = NULL;
  }
  else
  {
    head = NULL;
  }

  delete del_node;
}

void delete_at_any_position(Node *&head, Node *&tail, int idx)
{
  if (idx == 0) // delete at head
  {
    delete_at_head(head, tail);
  }
  else if (idx < (sz(head) - 1)) // delete between head and tail
  {
    Node *tmp = head, *del_node;

    while (--idx)
    {
      tmp = tmp->next;
    }

    del_node = tmp->next;

    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;

    delete del_node;
  }
  else // delete at tail
  {
    delete_at_tail(head, tail);
  }
}

void print_forward(Node *head)
{
  while (head)
  {
    cout << head->val << ' ';
    head = head->next;
  }
}

void print_backward(Node *tail)
{
  while (tail)
  {
    cout << tail->val << ' ';
    tail = tail->prev;
  }
}

int main()
{
  Node *head = NULL, *tail = NULL;

  take_input(head, tail);

  delete_at_any_position(head, tail, 3);

  print_forward(head);

  cout << endl;

  print_backward(tail);

  return 0;
}
