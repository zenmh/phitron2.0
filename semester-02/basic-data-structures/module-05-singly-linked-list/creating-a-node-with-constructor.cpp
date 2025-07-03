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

  SNode a(10), b(20), c(30);

  a.next = &b;
  b.next = &c;

  cout << a.val << ' ' << b.val << ' ' << c.val << endl;
  // OR
  cout << a.val << ' ' << a.next->val << ' ' << a.next->next->val;

  return 0;
}
