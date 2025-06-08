#include <iostream>

using namespace std;

int main()
{
  int x;

  cin >> x;

  switch (x % 2)
  {
  case 1:
    cout << "Odd";
    break;

  case 0:
    cout << "Even";
    break;
  }

  return 0;
}
