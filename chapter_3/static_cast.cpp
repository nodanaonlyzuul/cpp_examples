#include <iostream>
using namespace std;

int main (int argc, char const *argv[])
{
  int   my_int = 0x7fff;
  long  my_long;
  float my_float;

  // Castless conversion
  my_long  = my_int;
  my_float = my_int;

  // Narrowing conversion (can loose information)
  my_int = my_long;
  my_int = my_float;

  // Says "I know", eliminates warnings:
  my_int = static_cast<int>(my_long);
  my_int = static_cast<int>(my_float);
  char c = static_cast<char>(my_int);

  return 0;


}