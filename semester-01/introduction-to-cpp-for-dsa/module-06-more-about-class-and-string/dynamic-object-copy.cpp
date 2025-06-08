#include <bits/stdc++.h>

using namespace std;

class Cricketer
{
public:
  string country;
  int jersey_number;

  Cricketer(string country, int jersey_number)
  {
    this->country = country;
    this->jersey_number = jersey_number;
  }
};

int main()
{
  Cricketer *dhoni = new Cricketer("Bindia", 7), *kohli = new Cricketer("Bindia", 18);

  // kohli = dhoni;   // flase way to copy dynamic object
  *kohli = *dhoni; // right way to copy dynamic object

  delete dhoni;

  cout << kohli->country << ' ' << kohli->jersey_number;

  return 0;
}
