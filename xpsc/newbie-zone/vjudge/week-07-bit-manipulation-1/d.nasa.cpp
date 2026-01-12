/* ---------------------------------------------------------
Hi there, I'm here.
Btw, I'm Mehedi Hasan from Bangladesh. Let's get connected.
LinkedIn & CP: zenmh
--------------------------------------------------------- */

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define zenmh ios::sync_with_stdio(false), cin.tie(nullptr)
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
/*
- find_by_order(k): iterator to k-th element (0-indexed)
- order_of_key(x): count of elements strictly less than x
*/

const int maxN = (1 << 15) - 1;
vector<int> palindromes;

bool is_palindrome(string s)
{
  int i = 0, j = s.size() - 1;

  while (i < j)
  {
    if (s[i] != s[j])
    {
      return false;
    }

    i++, j--;
  }

  return true;
}

void mark_palindromes()
{
  for (int i = 0; i < maxN; i++)
  {
    if (is_palindrome(to_string(i)))
    {
      palindromes.push_back(i);
    }
  }
}

void run()
{
  int n;
  cin >> n;

  int a[n], freq[maxN + 1] = {0};

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    freq[a[i]]++;
  }

  ll ans = (ll)n;

  for (int x : a)
  {
    for (int y : palindromes)
    {
      ans += (ll)freq[x ^ y];
    }
  }

  cout << ans / 2 << nl;
}

int main()
{
  zenmh;
  mark_palindromes();

  int tc;
  cin >> tc;

  while (tc--)
  {
    run();
  }

  return 0;
}