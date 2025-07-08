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

bool detect_cycle(Node *head)
{
  Node *fast = head, *slow = head;

  while (fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (fast == slow)
    {
      return true;
    }
  }

  return false;
}

int main()
{
  Node *head = new Node(10), *a = new Node(20), *b = new Node(30), *c = new Node(40), *d = new Node(50), *tail = new Node(60);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = tail;
  tail->next = a; // intentionally make cycle

  detect_cycle(head) ? cout << "Cycle Detected" : cout << "NO Cycle Deteceted";

  return 0;
}
