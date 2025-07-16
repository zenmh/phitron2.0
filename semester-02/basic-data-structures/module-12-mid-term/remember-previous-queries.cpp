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

void delete_at_any_position(Node *head, int idx)
{
  while (--idx)
  {
    head = head->next;
  }

  Node *del_node = head->next;

  head->next = head->next->next;
  head->next->prev = head;

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

    if (x == 0)
    {
      insert_at_head(head, tail, v);
      size++;
    }
    else if (x == 1)
    {
      insert_at_tail(head, tail, v);
      size++;
    }
    else if (x == 2 && v < size)
    {
      if (v == 0)
      {
        delete_at_head(head, tail);
      }
      else if (v < (size - 1))
      {
        delete_at_any_position(head, v);
      }
      else
      {
        delete_at_tail(head, tail);
      }
      size--;
    }

    cout << "L -> ";
    print_l_to_r(head);
    cout << "\nR -> ";
    print_r_to_l(tail);
    cout << endl;
  }

  return 0;
}
