#include <iostream>
using namespace std;

int main (int argc, char const *argv[])
{
  for(int i = 0; i < 128; i++)
  {
    if(i != 26){
      cout << i << " => " << char(i) << endl;
    }
  }
  return 0;
}