#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string name, country;
  int jersey_number;
};

int main()
{
  int n;
  cin >> n;

  Student a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].name >> a[i].country >> a[i].jersey_number;
  }

  for (Student x : a)
  {
    cout << x.name << ' ' << x.country << ' ' << x.jersey_number << endl;
  }

  return 0;
}
