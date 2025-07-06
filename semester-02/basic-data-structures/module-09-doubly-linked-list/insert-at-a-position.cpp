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

void insert_at_a_position(Node *&head, Node *&tail, int pos, int val)
{
  Node *new_node = new Node(val);

  if (head && tail)
  {
    if (pos == 0) // insert at head
    {
      head->prev = new_node;
      new_node->next = head;
      head = new_node;
    }
    else if (pos < sz(head)) // insert without head and tail
    {
      Node *tmp = head;

      while (--pos)
      {
        tmp = tmp->next;
      }

      new_node->prev = tmp;
      new_node->next = tmp->next;

      tmp->next->prev = new_node;
      tmp->next = new_node;
    }
    else // insert at tail
    {
      tail->next = new_node;
      new_node->prev = tail;
      tail = new_node;
    }
  }
  else
  {
    head = new_node;
    tail = new_node;
  }
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

  insert_at_a_position(head, tail, 2, 2000);

  print_forward(head);

  cout << endl;

  print_backward(tail);

  return 0;
}
