#include <string>
#include <fstream>
using namespace std;

int main ()
{
  ifstream inputStream("scopy.cpp");
  ofstream outputStream("scopy.cpp.copy");
  string s;

  while(getline(inputStream, s)){
    outputStream << s << "\n";
  }

}
