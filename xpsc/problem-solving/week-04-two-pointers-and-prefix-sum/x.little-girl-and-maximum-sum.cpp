#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void slv()
{
  int n, q;
  cin >> n >> q;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int diff_arr[n + 1] = {0};

  while (q--)
  {
    int l, r;
    cin >> l >> r;
    l--, r--;

    diff_arr[l]++;
    diff_arr[r + 1]--;
  }

  for (int i = 1; i <= n; i++)
  {
    diff_arr[i] += diff_arr[i - 1];
  }

  sort(a, a + n, greater<int>());
  sort(diff_arr, diff_arr + n + 1, greater<int>());

  ll ans = 0;

  for (int i = 0; i < n; i++)
  {
    ans += 1LL * a[i] * diff_arr[i];
  }

  cout << ans;
}

int main()
{
  fio;
  slv();
  return 0;
}