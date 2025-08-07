#include <bits/stdc++.h>

using namespace std;

int main()
{
  priority_queue<int> pq;

  pq.push(10);
  pq.push(8);
  cout << pq.top() << endl; // 10

  pq.push(20);
  cout << pq.top() << endl; // 20

  pq.push(50);
  cout << pq.top() << endl; // 50

  return 0;
}
