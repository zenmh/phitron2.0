#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void slv()
{
  int n;
  cin >> n;

  map<int, int> diff_arr;

  while (n--)
  {
    int l, r;
    cin >> l >> r;
    diff_arr[l]++;
    diff_arr[r + 1]--;
  }

  ll sum = 0;
  bool flag = true;

  for (auto [key, val] : diff_arr)
  {
    sum += val;

    if (sum > 2)
    {
      flag = false;
      break;
    }
  }

  flag ? cout << "YES" : cout << "NO";
}

int main()
{
  fio;
  slv();
  return 0;
}