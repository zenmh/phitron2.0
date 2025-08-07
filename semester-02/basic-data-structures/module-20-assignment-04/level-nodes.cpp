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
    Node *parent = q.front();
    q.pop();

    int y, z;
    cin >> y >> z;

    Node *left = NULL, *right = NULL;

    if (y != -1)
    {
      left = new Node(y);
    }
    if (z != -1)
    {
      right = new Node(z);
    }

    parent->left = left;
    parent->right = right;

    if (left)
    {
      q.push(left);
    }
    if (right)
    {
      q.push(right);
    }
  }

  return root;
}

vector<int> level_order_traversal(Node *root, int x)
{
  queue<pair<Node *, int>> q;

  if (root)
  {
    q.push({root, 0});
  }

  vector<int> v;
  while (!q.empty())
  {
    pair<Node *, int> parent = q.front();
    q.pop();

    Node *node = parent.first;
    int level = parent.second;

    if (x == level)
    {
      v.push_back(node->val);
    }

    if (node->left)
    {
      q.push({node->left, level + 1});
    }
    if (node->right)
    {
      q.push({node->right, level + 1});
    }
  }

  return v;
}

int main()
{
  Node *root = take_input();

  int x;
  cin >> x;

  vector<int> v(level_order_traversal(root, x));

  if (v.empty())
  {
    cout << "Invalid";
  }
  else
  {
    for (int y : v)
    {
      cout << y << ' ';
    }
  }

  return 0;
}
