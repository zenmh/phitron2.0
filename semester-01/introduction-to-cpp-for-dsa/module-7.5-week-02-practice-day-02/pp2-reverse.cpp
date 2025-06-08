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

  Student s[n];

  for (int i = 0; i < n; i++)
  {
    cin >> s[i].name >> s[i].roll >> s[i].marks;
  }

  int i = 0, j = n - 1;
  while (i < j)
  {
    swap(s[i], s[j]);

    i++;
    j--;
  }

  for (int i = 0; i < n; i++)
  {
    cout << s[i].name << ' ' << s[i].roll << ' ' << s[i].marks << endl;
  }

  return 0;
}
