// class type-casting
#include <iostream>
using namespace std;

class CDummy {
    float i,j;
};

class CAddition {
	int x,y;

  public:
	CAddition (int a, int b) { x=a; y=b; }
	int result() { return x+y;}
};

//The program declares a pointer to CAddition, but then it assigns to it a reference to an object of another incompatible type using explicit type-casting:
//Traditional explicit type-casting allows to convert any pointer into any other pointer type, independently of the types they point to. The subsequent call to member result will produce either a run-time error or a unexpected result
int main () {
  CDummy d;
  CAddition * padd;

  padd = (CAddition*) &d;
  cout << padd->result() << endl;

  return 0;
}

