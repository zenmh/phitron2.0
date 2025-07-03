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
  SNode *head = new SNode(10), *a = new SNode(20), *b = new SNode(30);

  head->next = a;
  a->next = b;

  cout << head->val << ' ' << head->next->val << ' ' << head->next->next->val << endl;

  return 0;
}
