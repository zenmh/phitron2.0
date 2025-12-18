#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int q;
  cin >> q;

  deque<int> dq;
  bool reversed = false;

  while (q--)
  {
    string s;
    cin >> s;

    if (s == "back")
    {
      if (dq.empty())
      {
        cout << "No job for Ada?\n";
      }
      else
      {
        if (reversed)
        {
          cout << dq.front() << nl;
          dq.pop_front();
        }
        else
        {
          cout << dq.back() << nl;
          dq.pop_back();
        }
      }
    }
    else if (s == "front")
    {
      if (dq.empty())
      {
        cout << "No job for Ada?\n";
      }
      else
      {
        if (reversed)
        {
          cout << dq.back() << nl;
          dq.pop_back();
        }
        else
        {
          cout << dq.front() << nl;
          dq.pop_front();
        }
      }
    }
    else if (s == "reverse")
    {
      reversed = !reversed;
    }
    else if (s == "push_back")
    {
      int n;
      cin >> n;

      if (reversed)
      {
        dq.push_front(n);
      }
      else
      {
        dq.push_back(n);
      }
    }
    else
    {
      int n;
      cin >> n;

      if (reversed)
      {
        dq.push_back(n);
      }
      else
      {
        dq.push_front(n);
      }
    }
  }

  return 0;
}