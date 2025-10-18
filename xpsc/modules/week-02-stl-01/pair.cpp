#include <bits/stdc++.h>

#define nl '\n';
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  // Initializing
  pair<string, int> student1 = make_pair("John", 15);
  pair<string, int> student2 = {"Doe", 20};

  int n;
  cin >> n;

  pair<string, int> students_arr[n];
  // Or
  vector<pair<string, int>> students_vector(n);

  for (int i = 0; i < n; i++)
  {
    cin >> students_arr[i].first >> students_arr[i].second;
    // Or
    cin >> students_vector[i].first >> students_vector[i].second;
  }

  // Modifing
  student1.first = "Jon";
  student2.second = 50;

  auto [name, id] = students_arr[0];
  name = "Updated Name";

  // Acessing
  cout << student1.first; // John

  auto [name, id] = student2;
  cout << id; // 20;

  for (auto [name, id] : students_arr)
  {
    cout << name << ' ' << id << nl;
  }

  return 0;
}