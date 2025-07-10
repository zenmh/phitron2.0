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

  if (head && tail)
  {
    new_node->next = head;
    head->prev = new_node;
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

void insert_at_a_position(Node *head, int pos, int val)
{
  Node *new_node = new Node(val);

  while (--pos)
  {
    head = head->next;
  }

  new_node->next = head->next;
  new_node->prev = head;
  head->next = new_node;
  new_node->next->prev = new_node;
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

void print_doubly_linked_list_forward(Node *head)
{
  if (!head)
  {
    return;
  }

  cout << head->val << ' ';

  print_doubly_linked_list_forward(head->next);
}

void print_doubly_linked_list_backward(Node *tail)
{
  if (!tail)
  {
    return;
  }

  cout << tail->val << ' ';

  print_doubly_linked_list_backward(tail->prev);
}

void preform_q_queries()
{
  Node *head = NULL, *tail = NULL;

  int q;
  cin >> q;

  int size = sz(head);

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
        size++;
      }
      else if (x == size)
      {
        insert_at_tail(head, tail, v);
        size++;
      }
      else
      {
        insert_at_a_position(head, x, v);
        size++;
      }

      print_doubly_linked_list_forward(head);
      cout << endl;
      print_doubly_linked_list_backward(tail);
    }

    cout << endl;
  }
}

int main()
{
  preform_q_queries();

  return 0;
}
