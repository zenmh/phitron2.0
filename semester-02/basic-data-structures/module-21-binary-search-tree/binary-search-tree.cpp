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

bool binary_search_tree(Node *root, int x)
{
  if (!root)
  {
    return false;
  }

  if (root->val == x)
  {
    return true;
  }

  if (x < root->val)
  {
    return binary_search_tree(root->left, x);
  }
  else
  {
    return binary_search_tree(root->right, x);
  }
}

int main()
{
  Node *root = take_input();
  int x;
  cin >> x;

  if (binary_search_tree(root, x))
  {
    cout << "Found";
  }
  else
  {
    cout << "Not Found";
  }

  return 0;
}
