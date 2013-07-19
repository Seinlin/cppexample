// example on constructors and destructors
#include <iostream>
using namespace std;

// destrctor is automatically called when an object is destroyed, either because its scope of existence has finished.
// The destructor must have the same name as the class, but preceded with a tilde sign (~) and it must also return no value.
// The use of destructors is especially suitable when an object assigns dynamic memory during its lifetime and at the moment of being destroyed we want to release the memory that the object was allocated.
class CRectangle {
    int *width, *height;

  public:
    CRectangle (int,int);
    ~CRectangle ();
    int area () {return (*width * *height);}
};

CRectangle::CRectangle (int a, int b) {
  width = new int;
  height = new int;
  *width = a;
  *height = b;
}

CRectangle::~CRectangle () {
  delete width;
  delete height;
}

int main () {
  CRectangle rect (3,4), rectb (5,6);

  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;

  return 0;
}

