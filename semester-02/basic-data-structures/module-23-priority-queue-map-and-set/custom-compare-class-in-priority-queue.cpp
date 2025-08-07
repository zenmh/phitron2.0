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

  while (!pq.empty())
  {
    Student student = pq.top();
    cout << student.name << ' ' << student.roll << ' ' << student.marks << endl;
    pq.pop();
  }

  return 0;
}
