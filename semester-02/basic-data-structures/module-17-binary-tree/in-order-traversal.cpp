#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int val;
  Node *left, *right;

  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

void in_order(Node *root)
{
  if (!root)
  {
    return;
  }

  in_order(root->left);
  cout << root->val << ' ';
  in_order(root->right);
}

int main()
{
  Node *root = new Node(1),
       *a = new Node(2),
       *b = new Node(3),
       *c = new Node(4),
       *d = new Node(5),
       *e = new Node(6),
       *f = new Node(7),
       *g = new Node(8),
       *h = new Node(9),
       *i = new Node(10);

  root->left = a;
  a->left = c;
  a->right = d;
  d->left = g;
  root->right = b;
  b->left = e;
  b->right = f;
  f->left = h;
  f->right = i;

  in_order(root);

  return 0;
}
