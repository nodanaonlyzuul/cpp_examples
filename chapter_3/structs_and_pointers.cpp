#include <iostream>
using namespace std;

struct MyStructure {
  char    c;
  int     i;
  float   f;
  double  d;
};

int main (int argc, char const *argv[]) {
  MyStructure s1,s2;
  MyStructure* sp = &s1;

  sp->c = 'a';
  sp->i = 1;
  sp->f = 3.14;
  sp->d = 0.00093;

  cout << "sp is a pointed to s1, an instance of MyStructure" << endl;
  cout << "sp->c is: " << sp->c << endl;
  cout << "s1.c is: " << s1.c   << endl;
  cout << "&s1 = " << &s1 << endl;
  cout << "&sp = " << &sp << endl;

  return 0;
}