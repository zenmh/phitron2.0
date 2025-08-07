#include <bits/stdc++.h>

using namespace std;

int main()
{
  priority_queue<int, vector<int>, greater<int>> pq;

  pq.push(100);
  pq.push(40);
  pq.push(200);
  cout << pq.top() << endl; // 40

  pq.push(20);
  cout << pq.top() << endl; // 20

  pq.push(10);
  cout << pq.top() << endl; // 10

  pq.pop();
  cout << pq.top() << endl; // 20

  cout << pq.size() << endl; // 4

  cout << pq.empty() << endl; // 0 == false

  return 0;
}
