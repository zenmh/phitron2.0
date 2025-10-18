#include <bits/stdc++.h>

#define nl '\n';
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  // Initializing
  tuple<string, int, int, bool> t1 = make_tuple("Rahim", 2, 10, false);
  tuple<string, int, int> t2 = {"Karim", 30, 9};

  // Accessing
  auto [name, id, cls, adult] = t1;
  cout << name << ' ' << id << ' ' << cls << ' ' << adult << nl;      // Rahim 2 10 0
  cout << get<0>(t2) << ' ' << get<1>(t2) << ' ' << get<2>(t2) << nl; // Karim 30 9

  return 0;
}