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

int main()
{

  Student rakib(5, 3, 4.78), sakib(5, 43, 2.34);

  cout << rakib.cls << ' ' << rakib.roll << ' ' << rakib.gpa << endl
       << sakib.cls << ' ' << sakib.roll << ' ' << sakib.gpa;

  return 0;
}
