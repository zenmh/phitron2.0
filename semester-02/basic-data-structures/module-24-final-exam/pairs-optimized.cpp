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

bool cmp(Person l, Person r)
{
  if (l.name == r.name)
  {
    return l.val > r.val;
  }
  else
  {
    return l.name < r.name;
  }
};

int main()
{
  int n;
  cin >> n;

  vector<Person> v;

  while (n--)
  {
    string name;
    int val;
    cin >> name >> val;

    Person person(name, val);
    v.push_back(person);
  }

  sort(v.begin(), v.end(), cmp);

  for (Person x : v)
  {
    cout << x.name << ' ' << x.val << endl;
  }

  return 0;
}
