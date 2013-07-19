// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;

  myfile.open ("example.txt");

  if (myfile.is_open()) {
    myfile << "Writing this to a file line:" << __LINE__ << endl;
    myfile << "Writing this to a file line:" << __LINE__ << endl;
    myfile << "Writing this to a file line:" << __LINE__ << endl;
    myfile.close();
  }
  else
    cout << "Unable to open file!" << endl;

  return 0;
}

