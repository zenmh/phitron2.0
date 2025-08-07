#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string name;
  int roll, marks;

  Student(string name, int roll, int marks)
  {
    this->name = name;
    this->roll = roll;
    this->marks = marks;
  }
};

class Cmp
{
public:
  bool operator()(Student l, Student r)
  {
    if (l.marks < r.marks)
    {
      return true;
    }
    else if (l.marks > r.marks)
    {
      return false;
    }
    else
    {
      return l.roll > r.roll;
    }
  }
};

int main()
{
  int n;
  cin >> n;

  priority_queue<Student, vector<Student>, Cmp> pq;

  while (n--)
  {
    string name;
    int roll, marks;
    cin >> name >> roll >> marks;
    Student student(name, roll, marks);
    pq.push(student);
  }

  int q;
  cin >> q;

  while (q--)
  {
    int o;
    cin >> o;

    if (o == 0)
    {
      string name;
      int roll, marks;
      cin >> name >> roll >> marks;
      Student student(name, roll, marks);
      pq.push(student);

      Student top = pq.top();
      cout << top.name << ' ' << top.roll << ' ' << top.marks;
    }
    else if (o == 1)
    {
      if (pq.empty())
      {
        cout << "Empty";
      }
      else
      {
        Student top = pq.top();
        cout << top.name << ' ' << top.roll << ' ' << top.marks;
      }
    }
    else
    {
      if (!pq.empty())
      {
        pq.pop();
      }

      if (pq.empty())
      {
        cout << "Empty";
      }
      else
      {
        Student top = pq.top();
        cout << top.name << ' ' << top.roll << ' ' << top.marks;
      }
    }
    cout << endl;
  }

  return 0;
}
