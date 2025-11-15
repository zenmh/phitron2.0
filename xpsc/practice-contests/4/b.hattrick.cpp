#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void slv()
{
  int t;
  cin >> t;

  cin.ignore();

  while (t--)
  {
    string s, w;
    getline(cin, s);
    stringstream ss(s);

    int cnt = 0, flag = 0;

    while (ss >> w)
    {
      if (w == "W")
      {
        cnt++;

        if (cnt == 3)
        {
          cout << "YES\n";
          flag = 1;
          break;
        }
      }
      else
      {
        cnt = 0;
      }
    }

    !flag &&cout << "NO\n";
  }
}

int main()
{
  fio;
  slv();
  return 0;
}