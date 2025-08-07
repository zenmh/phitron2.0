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

vector<int> v;

void leaf_nodes(Node *root)
{
  if (!root)
  {
    return;
  }

  if (!root->left && !root->right)
  {
    v.push_back(root->val);
    return;
  }

  leaf_nodes(root->left);
  leaf_nodes(root->right);
}

int main()
{
  Node *root = take_input();

  leaf_nodes(root);

  sort(v.begin(), v.end(), greater<int>());

  for (int x : v)
  {
    cout << x << ' ';
  }

  return 0;
}
