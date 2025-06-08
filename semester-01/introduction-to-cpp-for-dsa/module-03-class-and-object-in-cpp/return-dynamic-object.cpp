#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  int cls, roll;
  double gpa;

  Student(int cls, int roll, double gpa)
  {
    this->cls = cls;
    this->roll = roll;
    this->gpa = gpa;
  }
};

Student *fun()
{
  Student *rakib = new Student(5, 3, 4.78);

  return rakib;
}

int main()
{

  Student *rakib = fun();

  cout << (*rakib).cls << ' ' << rakib->roll << ' ' << rakib->gpa;

  return 0;
}
