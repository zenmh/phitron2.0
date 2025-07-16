#include <bits/stdc++.h>

using namespace std;

int main()
{
  list<int> l;

  int q;
  cin >> q;

  int size = 0;

  while (q--)
  {
    int x, v;
    cin >> x >> v;

    if (x == 0)
    {
      l.push_front(v);
      size++;
    }
    else if (x == 1)
    {
      l.push_back(v);
      size++;
    }
    else if (x == 2 && v < size)
    {
      l.erase(next(l.begin(), v));
      size--;
    }

    cout << "L -> ";

    for (int y : l)
    {
      cout << y << ' ';
    }

    cout << "\nR -> ";

    for (int i = size - 1; i >= 0; i--)
    {
      cout << *next(l.begin(), i) << ' ';
    }

    cout << endl;
  }

  return 0;
}
