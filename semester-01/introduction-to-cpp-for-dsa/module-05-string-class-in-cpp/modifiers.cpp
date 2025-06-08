#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s = "hello world", s2 = " hi";

  s += s2;
  cout << s; // hello world hi
  s.append(s2);
  cout << s; // hello world hi

  s.push_back('x');
  cout << s; // hello worldx

  s.pop_back();
  cout << s; // hello worl

  s = s2;
  cout << s; //  hi

  s.assign(s2);
  cout << s; // hi

  s.erase(3);
  cout << s; // hel

  s.erase(3, 5); // 1st para -> index to start, 2nd para -> how many characters, Btw, if you don't provide 2nd para it will remove till end.
  cout << s;     // helrld

  s.replace(5, 2, "new");
  cout << s; // helloneworld

  s.insert(5, " new");
  cout << s; // hello new world

  return 0;
}
