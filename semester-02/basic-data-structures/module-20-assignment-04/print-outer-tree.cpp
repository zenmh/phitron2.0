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

void print_left(Node *root)
{
  if (!root)
  {
    return;
  }

  if (root->left)
  {
    print_left(root->left);
  }
  else
  {
    print_left(root->right);
  }

  cout << root->val << ' ';
}

void print_right(Node *root)
{
  if (!root)
  {
    return;
  }

  cout << root->val << ' ';

  if (root->right)
  {
    print_right(root->right);
  }
  else
  {
    print_right(root->left);
  }
}

int main()
{
  Node *root = take_input();

  print_left(root->left);

  cout << root->val << ' ';

  print_right(root->right);

  return 0;
}
