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
    // 1. queue er first node ber kora ana
    Node *parent = q.front();
    q.pop();

    // 2. disired kaj gulo kora
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

    // 3. left and right thakle queue te push kore deya
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

int count_nodes(Node *root)
{
  if (!root)
  {
    return 0;
  }

  int left = count_nodes(root->left),
      right = count_nodes(root->right);

  return left + right + 1;
}

int main()
{
  Node *root = take_input();

  cout << count_nodes(root);

  return 0;
}
