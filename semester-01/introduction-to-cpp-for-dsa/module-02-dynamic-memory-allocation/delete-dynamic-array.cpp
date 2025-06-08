#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n1;

  cin >> n1;

  int *a = new int[n1];

  for (int i = 0; i < n1; i++)
  {
    cin >> a[i];
  }

  int n2;

  cin >> n2;

  int *b = new int[n1 + n2];

  for (int i = 0; i < n1; i++)
  {
    b[i] = a[i];
  }

  delete[] a; // delete unused array for better memory management

  for (int i = n1; i < n1 + n2; i++)
  {
    cin >> b[i];
  }

  for (int i = 0; i < n1 + n2; i++)
  {
    cout << b[i] << ' ';
  }

  return 0;
}
