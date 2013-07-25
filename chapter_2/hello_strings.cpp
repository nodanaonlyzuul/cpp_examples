#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string string1, string2;

  string string3 = "Hello World.";
  string string4 = "I am ";
  string2        = "Today";

  string1 = string3 + " " + string4;
  string1 += " 8 ";

  cout << string1 << string2 << "!" << endl;
}