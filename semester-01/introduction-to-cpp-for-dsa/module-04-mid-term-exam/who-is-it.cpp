#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  int id;
  char name[101];
  char section;
  int total_marks;
};

int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    Student s1, s2, s3;

    cin >> s1.id >> s1.name >> s1.section >> s1.total_marks >> s2.id >> s2.name >> s2.section >> s2.total_marks >> s3.id >> s3.name >> s3.section >> s3.total_marks;

    if (s1.total_marks > s2.total_marks && s1.total_marks > s3.total_marks)
    {
      cout << s1.id << ' ' << s1.name << ' ' << s1.section << ' ' << s1.total_marks;
    }
    else if (s2.total_marks > s1.total_marks && s2.total_marks > s3.total_marks)
    {
      cout << s2.id << ' ' << s2.name << ' ' << s2.section << ' ' << s2.total_marks;
    }
    else if (s3.total_marks > s1.total_marks && s3.total_marks > s2.total_marks)
    {
      cout << s3.id << ' ' << s3.name << ' ' << s3.section << ' ' << s3.total_marks;
    }
    else if (s1.total_marks == s2.total_marks)
    {
      if (s1.id < s2.id)
      {
        cout << s1.id << ' ' << s1.name << ' ' << s1.section << ' ' << s1.total_marks;
      }
      else
      {
        cout << s2.id << ' ' << s2.name << ' ' << s2.section << ' ' << s2.total_marks;
      }
    }
    else if (s1.total_marks == s3.total_marks)
    {
      if (s1.id < s3.id)
      {
        cout << s1.id << ' ' << s1.name << ' ' << s1.section << ' ' << s1.total_marks;
      }
      else
      {
        cout << s3.id << ' ' << s3.name << ' ' << s3.section << ' ' << s3.total_marks;
      }
    }
    else if (s2.total_marks == s3.total_marks)
    {
      if (s2.id < s3.id)
      {
        cout << s2.id << ' ' << s2.name << ' ' << s2.section << ' ' << s2.total_marks;
      }
      else
      {
        cout << s3.id << ' ' << s3.name << ' ' << s3.section << ' ' << s3.total_marks;
      }
    }

    cout << endl;
  }

  return 0;
}
