#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string nm;
  int cls;
  char s;
  int id, math_marks, eng_marks;
};

bool cmp(Student l, Student r)
{
  if ((l.math_marks + l.eng_marks) == (r.math_marks + r.eng_marks))
  {
    return l.id < r.id;
  }
  else
  {
    return (l.math_marks + l.eng_marks) > (r.math_marks + r.eng_marks);
  }
}

int main()
{
  int n;
  cin >> n;

  Student a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].nm >> a[i].cls;
    cin.ignore();
    cin >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
  }

  sort(a, a + n, cmp);

  for (Student s : a)
  {
    cout << s.nm << ' ' << s.cls << ' ' << s.s << ' ' << s.id << ' ' << s.math_marks << ' ' << s.eng_marks << endl;
  }

  return 0;
}
