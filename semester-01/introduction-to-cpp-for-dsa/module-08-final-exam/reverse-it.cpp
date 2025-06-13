#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string nm;
  int cls;
  char s;
  int id;
};

int main()
{
  int n;
  cin >> n;

  Student a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].nm >> a[i].cls;
    cin.ignore();
    cin >> a[i].s >> a[i].id;
  }

  for (int i = 0, j = n - 1; i < j; i++, j--)
  {
    swap(a[i].s, a[j].s);
  }

  for (Student s : a)
  {
    cout << s.nm << ' ' << s.cls << ' ' << s.s << ' ' << s.id << endl;
  }

  return 0;
}
