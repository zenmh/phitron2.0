#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string name;
  int roll, marks;
};

int main()
{
  int n;
  cin >> n;

  Student a[n], min_obj;
  min_obj.marks = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].name >> a[i].roll >> a[i].marks;

    if (a[i].marks < min_obj.marks)
    {
      min_obj = a[i];
    }
  }

  cout << min_obj.name << ' ' << min_obj.roll << ' ' << min_obj.marks;

  return 0;
}
