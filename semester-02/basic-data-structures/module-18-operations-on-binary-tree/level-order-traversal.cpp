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

void level_order(Node *root)
{
  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    // 1. node ke ber kore ana
    Node *front = q.front();
    q.pop();

    // 2. node ke niye kaj kora
    cout << front->val << ' ';

    // 3. childrens gula push kora (jodi thake)
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
  Node *root = new Node(10),
       *a = new Node(20),
       *b = new Node(30),
       *c = new Node(40),
       *d = new Node(50),
       *e = new Node(60);

  root->left = a;
  root->right = b;
  a->left = c;
  b->left = d;
  b->right = e;

  level_order(root);

  return 0;
}
