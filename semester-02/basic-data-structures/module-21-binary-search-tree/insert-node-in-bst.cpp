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

Node *take_input()
{
  int x;
  cin >> x;

  Node *root = NULL;

  if (x != -1)
  {
    root = new Node(x);
  }

  queue<Node *> q;

  if (root)
  {
    q.push(root);
  }

  while (!q.empty())
  {
    Node *p = q.front();
    q.pop();

    int y, z;
    cin >> y >> z;

    Node *l = NULL, *r = NULL;

    if (y != -1)
    {
      l = new Node(y);
    }
    if (z != -1)
    {
      r = new Node(z);
    }

    p->left = l;
    p->right = r;

    if (l)
    {
      q.push(l);
    }
    if (r)
    {
      q.push(r);
    }
  }

  return root;
}

void insert_at_bst(Node *&root, int x)
{
  if (!root)
  {
    root = new Node(x);
  }

  if (root->val > x)
  {
    if (!root->left)
    {
      root->left = new Node(x);
    }
    else
    {
      insert_at_bst(root->left, x);
    }
  }
  else
  {
    if (!root->right)
    {
      root->right = new Node(x);
    }
    else
    {
      insert_at_bst(root->right, x);
    }
  }
}

void print_bst_level_order(Node *root)
{
  queue<Node *> q;

  if (root)
  {
    q.push(root);
  }

  while (!q.empty())
  {
    Node *p = q.front();
    q.pop();

    cout << p->val << ' ';

    if (p->left)
    {
      q.push(p->left);
    }
    if (p->right)
    {
      q.push(p->right);
    }
  }
}

int main()
{
  Node *root = take_input();

  insert_at_bst(root, 21);
  insert_at_bst(root, 11);

  print_bst_level_order(root);

  return 0;
}
