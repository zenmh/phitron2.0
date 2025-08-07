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

int nodes = 0;

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
    nodes++;
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
      nodes++;
    }
    if (right)
    {
      q.push(right);
      nodes++;
    }
  }

  return root;
}

int max_depth(Node *root)
{
  if (!root)
  {
    return 0;
  }

  if (!root->left && !root->right)
  {
    return 1;
  }

  int left = max_depth(root->left),
      right = max_depth(root->right);

  return max(left, right) + 1;
}

int main()
{
  Node *root = take_input();

  int nodes_should = pow(2, max_depth(root)) - 1;

  nodes == nodes_should ? cout << "YES" : cout << "NO";

  return 0;
}
