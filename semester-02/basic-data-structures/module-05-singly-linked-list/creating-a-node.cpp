#include <bits/stdc++.h>

using namespace std;

class SNode
{
public:
  int val;
  SNode *next;
};

int main()
{
  SNode a, b, c;

  a.val = 10;
  b.val = 20;
  c.val = 30;

  a.next = &b;
  b.next = &c;
  c.next = NULL;

  cout << a.val << ' ' << b.val << ' ' << c.val << endl;
  // OR
  cout << a.val << ' ' << a.next->val << ' ' << a.next->next->val;

  return 0;
}
