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

bool same_to_same(Node *head1, Node *head2)
{

  int size1 = sz(head1), size2 = sz(head2);

  if (size1 != size2)
  {
    return false;
  }

  while (head1 && head2)
  {
    if (head1->val != head2->val)
    {
      return false;
    }

    head1 = head1->next;
    head2 = head2->next;
  }

  return true;
}

int main()
{
  Node *head1 = NULL, *tail1 = NULL, *head2 = NULL, *tail2 = NULL;

  take_input(head1, tail1);
  take_input(head2, tail2);

  same_to_same(head1, head2) ? cout << "YES" : cout << "NO";

  return 0;
}
