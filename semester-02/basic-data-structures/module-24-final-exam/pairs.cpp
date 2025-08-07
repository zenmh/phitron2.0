#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
  string name;
  int val;

  Person(string name, int val)
  {
    this->name = name;
    this->val = val;
  }
};

class Cmp
{
public:
  bool operator()(Person l, Person r)
  {
    if (l.name == r.name)
    {
      return l.val < r.val;
    }
    else
    {
      return l.name > r.name;
    }
  }
};

int main()
{
  int n;
  cin >> n;

  priority_queue<Person, vector<Person>, Cmp> pq;

  while (n--)
  {
    string name;
    int val;
    cin >> name >> val;

    Person person(name, val);
    pq.push(person);
  }

  while (!pq.empty())
  {
    Person top = pq.top();
    cout << top.name << ' ' << top.val << endl;
    pq.pop();
  }

  return 0;
}
