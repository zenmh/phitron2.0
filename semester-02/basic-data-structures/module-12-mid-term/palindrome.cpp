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

bool palindrome(Node *head, Node *tail)
{
  while (head != tail && head->prev != tail)
  {
    if (head->val != tail->val)
    {
      return false;
    }

    head = head->next;
    tail = tail->prev;
  }

  return true;
}

int main()
{
  Node *head = NULL, *tail = NULL;

  take_input(head, tail);

  palindrome(head, tail) ? cout << "YES" : cout << "NO";

  return 0;
}
