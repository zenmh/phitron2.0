#include <iostream>

using namespace std;

void fun()
{
  int n;
  char c;
  cin >> n >> c;

  while (n--)
  {
    cout << c << ' ';
  }
}

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    fun();
    cout << endl;
  }
}
