#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string name;
  int roll, math_marks, english_marks;

  Student(string name, int roll, int math_marks, int english_marks)
  {
    this->name = name;
    this->roll = roll;
    this->math_marks = math_marks;
    this->english_marks = english_marks;
  }

  void total_marks()
  {
    cout << "Total marks of " << name << " is " << math_marks + english_marks << endl;
  }
};

int main()
{
  Student s1("Rakib", 23, 70, 90), s2("Sakib", 43, 90, 80);
  s1.total_marks();
  s2.total_marks();

  return 0;
}
