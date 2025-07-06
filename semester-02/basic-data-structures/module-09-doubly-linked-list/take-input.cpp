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

void insert_at_head(Node *&head, Node *&tail, int val)
{
  Node *new_node = new Node(val);

  if (head)
  {
    head->prev = new_node;
    new_node->next = head;
    head = new_node;
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

  print_forward(head);

  cout << endl;

  print_backward(tail);

  return 0;
}
