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
    // 1. queqe theke first node ber kore ana
    Node *parent = q.front();
    q.pop();

    // 2. kaj kore
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

    // 3. queue te child gula push kora
    if (parent->left)
    {
      q.push(parent->left);
    }
    if (parent->right)
    {
      q.push(parent->right);
    }
  }

  return root;
}

void level_order_print(Node *root)
{
  if (!root)
  {
    cout << "No Tree Found!";
    return;
  }

  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    // 1. queue theke first node ber kore ana
    Node *front = q.front();
    q.pop();

    // 2. kaj ta kora
    cout << front->val << ' ';

    // 3. childs gula push kora queue te
    if (front->left)
    {
      q.push(front->left);
    }
    if (front->right)
    {
      q.push(front->right);
    }
  }
}

int main()
{
  Node *root = take_input();

  level_order_print(root);

  return 0;
}
