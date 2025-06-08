#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string name;
  int roll, marks;
};

bool cmp(Student l, Student r)
{
  // longcut
  // if (l.marks < r.marks)
  // {
  //   return true;
  // }
  // else
  // {
  //   return false;
  // }

  // shortcut
  return l.marks < r.marks;
}

int main()
{
  int n;
  cin >> n;

  Student a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].name >> a[i].roll >> a[i].marks;
  }

  sort(a, a + n, cmp);

  for (Student x : a)
  {
    cout << x.name << ' ' << x.roll << ' ' << x.marks << endl;
  }

  return 0;
}
