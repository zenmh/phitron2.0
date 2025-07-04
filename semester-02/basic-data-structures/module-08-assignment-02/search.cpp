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

int index(Node *head, int x)
{
  int idx = 0;

  while (head)
  {
    if (head->val == x)
    {
      break;
    }
    idx++;

    head = head->next;
  }

  if (!head)
  {
    return -1;
  }

  return idx;
}

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    Node *head = NULL, *tail = NULL;

    take_input(head, tail);

    int x;
    cin >> x;

    cout << index(head, x) << endl;
  }

  return 0;
}
