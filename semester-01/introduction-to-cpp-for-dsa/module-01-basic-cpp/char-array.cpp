#include <iostream>

using namespace std;

int main()
{
  int x;

  cin >> x;

  char s[100];

  cin.ignore();

  cin.getline(s, 100);

  cout << x << endl
       << s;

  return 0;
}
