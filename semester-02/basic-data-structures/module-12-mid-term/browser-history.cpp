#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  string val;
  Node *prev, *next;

  Node(string val)
  {
    this->val = val;
    this->prev = NULL;
    this->next = NULL;
  }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
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
    string val;
    cin >> val;

    if (val == "end")
    {
      break;
    }
    else
    {
      insert_at_tail(head, tail, val);
    }
  }
}

void visit(Node *&curr, Node *tmp, string adrs)
{
  while (tmp)
  {
    if (tmp->val == adrs)
    {
      break;
    }

    tmp = tmp->next;
  }

  if (!tmp)
  {
    cout << "Not Available";
  }
  else
  {
    cout << tmp->val;
    curr = tmp;
  }
}

int main()
{
  Node *head = NULL, *tail = NULL, *curr;

  take_input(head, tail);

  int q;
  cin >> q;

  while (q--)
  {
    string cmd;
    cin >> cmd;

    if (cmd == "visit")
    {
      string adrs;
      cin >> adrs;

      visit(curr, head, adrs);
    }
    else if (cmd == "next")
    {
      if (curr->next)
      {
        curr = curr->next;
        cout << curr->val;
      }
      else
      {
        cout << "Not Available";
      }
    }
    else
    {
      if (curr->prev)
      {
        curr = curr->prev;
        cout << curr->val;
      }
      else
      {
        cout << "Not Available";
      }
    }

    cout << endl;
  }

  return 0;
}
