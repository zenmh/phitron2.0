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

void delete_at_any_position(Node *&head, Node *&tail, int pos)
{
  if (pos == 0)
  {
    Node *del_node = head;

    head = head->next;

    delete del_node;
  }
  else
  {
    Node *tmp = head;

    for (int i = 1; i < pos; i++)
    {
      tmp = tmp->next;
    }

    Node *del_node = tmp->next;

    tmp->next = tmp->next->next;

    if (tmp->next == NULL)
    {
      tail = tmp;
    }

    delete del_node;
  }
}

void prnt(Node *head)
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

  prnt(head);

  delete_at_any_position(head, tail, 4);

  cout << endl;
  prnt(head);

  return 0;
}
