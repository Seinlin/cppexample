// obtaining file size
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  long begin,end;
  ifstream myfile ("example.txt");

  cout << "tellg" << myfile.tellg() << endl;
  begin = myfile.tellg();
  myfile.seekg (0, ios::end);
  cout << "tellg" << myfile.tellg() << endl;
  end = myfile.tellg();
  myfile.close();

  cout << "size is: " << (end-begin) << " bytes.\n";

  return 0;
}

