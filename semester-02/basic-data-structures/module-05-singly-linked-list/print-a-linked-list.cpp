#include <bits/stdc++.h>

using namespace std;

class SNode
{
public:
  int val;
  SNode *next;

  SNode(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

int main()
{
  SNode *head = new SNode(10), *a = new SNode(20), *b = new SNode(30), *c = new SNode(40), *tail = new SNode(50);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = tail;

  SNode *tmp = head;

  while (tmp)
  {
    cout << tmp->val << endl;
    tmp = tmp->next;
  }

  return 0;
}
