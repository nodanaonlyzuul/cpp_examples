#include <iostream>
using namespace std;

struct Structure1 {
  char    c;
  int     i;
  float   f;
  double  d;
};

int main()
{
  Structure1 s1, s2;

  s1.c = 'a';
  s1.i = 1;
  s1.f = 3.14;
  s1.d = 0.00093;

  s2.c = 'a';
  s2.i = 1;
  s2.f = 3.14;
  s2.d = 0.00093;

  return 0;
}