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
    // queue theke first node ke ber kore ana
    Node *parent = q.front();
    q.pop();

    // desired kaj kora
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

    // left and righ thakle queue te push kora
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

int count_leaf_nodes(Node *root)
{
  if (!root)
  {
    return 0;
  }

  if (!root->left && !root->right)
  {
    return 1;
  }

  int left = count_leaf_nodes(root->left),
      right = count_leaf_nodes(root->right);

  return left + right;
}

int main()
{
  Node *root = take_input();
  cout << count_leaf_nodes(root);

  return 0;
}
