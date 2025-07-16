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

void insert_at_a_position(Node *head, int pos, int val)
{
  Node *new_node = new Node(val);

  while (--pos)
  {
    head = head->next;
  }

  new_node->prev = head;
  new_node->next = head->next;

  head->next->prev = new_node;
  head->next = new_node;
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

void print_l_to_r(Node *head)
{
  while (head)
  {
    cout << head->val << ' ';
    head = head->next;
  }
}

void print_r_to_l(Node *tail)
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

  int q;
  cin >> q;

  int size = 0;

  while (q--)
  {
    int x, v;
    cin >> x >> v;

    if (x > size)
    {
      cout << "Invalid";
    }
    else
    {
      if (x == 0)
      {
        insert_at_head(head, tail, v);
      }
      else if (x < size)
      {
        insert_at_a_position(head, x, v);
      }
      else
      {
        insert_at_tail(head, tail, v);
      }

      size++;

      cout << "L -> ";
      print_l_to_r(head);
      cout << "\nR -> ";
      print_r_to_l(tail);
    }

    cout << endl;
  }

  return 0;
}
