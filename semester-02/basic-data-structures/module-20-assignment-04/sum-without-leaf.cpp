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

long long sum_without_leaf(Node *root)
{
  if (!root || (!root->left && !root->right))
  {
    return 0;
  }

  long long left_sum = sum_without_leaf(root->left),
            right_sum = sum_without_leaf(root->right);

  return left_sum + right_sum + root->val;
}

int main()
{
  Node *root = take_input();

  cout << sum_without_leaf(root);

  return 0;
}
