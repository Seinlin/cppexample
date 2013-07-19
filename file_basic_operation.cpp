// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

//ios::in	Open for input operations.
//ios::out	Open for output operations.
//ios::binary	Open in binary mode.
//ios::ate	Set the initial position at the end of the file. If this flag is not set to any value, 
//              the initial position is the beginning of the file.
//ios::app	All output operations are performed at the end of the file, appending the content to the current content of the file. 
//              This flag can only be used in streams open for output-only operations.
//ios::trunc	If the file opened for output operations already existed before, 
//              its previous content is deleted and replaced by the new one.

//class	default mode parameter
//ofstream	ios::out
//ifstream	ios::in
//fstream	ios::in | ios::out

int main () {
  ofstream myfile;

  myfile.open ("example.txt");

  if (myfile.is_open()) {
    myfile << "Writing this to a file.";
    myfile.close();
  }
  else
    cout << "Unable to open file!" << endl;

  return 0;
}

