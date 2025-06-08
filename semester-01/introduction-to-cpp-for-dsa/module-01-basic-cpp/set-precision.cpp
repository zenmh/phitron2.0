#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double d = 3.14159;

  cout << fixed << setprecision(4) << d;

  return 0;
}
