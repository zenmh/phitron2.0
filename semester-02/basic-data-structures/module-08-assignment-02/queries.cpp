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

void insert_at_head(Node *&head, Node *&tail, int val)
{
  Node *new_node = new Node(val);

  if (!head)
  {
    head = new_node;
    tail = new_node;
  }
  else
  {
    new_node->next = head;
    head = new_node;
  }
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

void delete_at_index(Node *&head, Node *&tail, int v, int size)
{
  Node *del_node, *tmp = head;

  if (v == 0)
  {
    del_node = head;
    head = head->next;
  }
  else if (v == (size - 1))
  {
    while (tmp->next->next)
    {
      tmp = tmp->next;
    }

    del_node = tmp->next;
    tmp->next = NULL;

    tail = tmp;
  }
  else
  {
    while (--v)
    {
      tmp = tmp->next;
    }

    del_node = tmp->next;
    tmp->next = tmp->next->next;
  }

  delete del_node;
}

void print_linked_list(Node *head)
{
  if (!head)
  {
    return;
  }

  cout << head->val << ' ';

  print_linked_list(head->next);
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
    else
    {
      if (v <= (size - 1))
      {
        delete_at_index(head, tail, v, size);
        size--;
      }
    }

    print_linked_list(head);

    cout << endl;
  }

  return 0;
}
