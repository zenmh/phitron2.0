#include <bits/stdc++.h>

using namespace std;

void fun(int *&p)
{
  cout << "Fun -> " << &p << endl;
}

/*
Without Copy ==> void fun(int *p)
Fun -> 0x7ffce3067ae8
Main -> 0x7ffce3067b10

With Copy ==> void fun(int *&p)
Fun -> 0x7ffc4578079c
Main -> 0x7ffc4578079c
*/

int main()
{
  int x = 10;
  int *p = &x;

  fun(p);

  cout << "Main -> " << &p << endl;

  return 0;
}
