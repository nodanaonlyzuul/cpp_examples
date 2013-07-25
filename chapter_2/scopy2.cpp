#include <string>
#include <fstream>
using namespace std;

int main ()
{
  ifstream inn("scopy.cpp");
  ofstream out("scopy2.cpp");
  string s;

  while(getline(inn, s)){
    out << s << "\n";
  }

}
