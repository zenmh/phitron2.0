#include <bits/stdc++.h>

using namespace std;

int main()
{
  int q;
  cin >> q;

  queue<string> q1;

  while (q--)
  {
    string i;
    cin >> i;

    if (i == "ARRIVE")
    {
      string p;
      cin >> p;
      q1.push(p);
    }
    else if (i == "FIRST")
    {
      q1.empty() ? cout << "No patients\n" : cout << q1.front() << endl;
    }
    else if (i == "LAST")
    {
      q1.empty() ? cout << "No patients\n" : cout << q1.back() << endl;
    }
    else if (i == "COUNT")
    {
      cout << q1.size() << endl;
    }
    else if (i == "SERVE")
    {
      if (q1.empty())
      {
        cout << "No patients\n";
      }
      else
      {
        q1.pop();
      }
    }
    else
    {
      queue<string> q2(q1);

      while (!q2.empty())
      {
        cout << q2.front() << ' ';
        q2.pop();
      }

      cout << endl;
    }
  }

  return 0;
}
