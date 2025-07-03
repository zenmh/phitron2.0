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

bool duplicate(Node *head)
{
  vector<int> freq(100, 0);

  while (head)
  {
    freq[head->val]++;
    head = head->next;
  }

  freq[head->val]++;

  for (int i = 0; i < 100; i++)
  {
    if (freq[i] >= 2)
    {
      return true;
    }
  }

  return false;
}

int main()
{
  Node *head = new Node(5), *a = new Node(4), *b = new Node(8), *c = new Node(6), *d = new Node(2), *tail = new Node(1);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = tail;

  duplicate(head) ? cout << "YES" : cout << "NO";

  return 0;
}
