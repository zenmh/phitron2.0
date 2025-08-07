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

void pre_order(Node *root)
{
  if (!root)
  {
    return;
  }

  cout << root->val << ' ';
  pre_order(root->left);
  pre_order(root->right);
}

int main()
{
  Node *root = new Node(10),
       *a = new Node(20),
       *b = new Node(30),
       *c = new Node(40),
       *d = new Node(50),
       *e = new Node(60);

  root->left = a;
  root->right = b;
  a->left = c;
  b->left = d;
  b->right = e;

  pre_order(root);

  return 0;
}
