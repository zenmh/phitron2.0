#include <bits/stdc++.h>

using namespace std;

int main()
{
  map<string, int> m;

  m["hamim"] = 35; // O(logN)
  m["ramim"] = 0;
  m["tamim"] = 50;

  for (auto it = m.begin(); it != m.end(); it++) // O(NlogN)
  {
    cout << it->first << " = " << it->second << endl; // O(logN)
  }

  // Check is the value has in the map or not
  if (m.count("ramim")) // Has
  {
    cout << "Has" << endl;
  }
  else
  {
    cout << "Hasn't" << endl;
  }

  if (m.count("samim")) // Hasn't
  {
    cout << "Has" << endl;
  }
  else
  {
    cout << "Hasn't" << endl;
  }

  return 0;
}
